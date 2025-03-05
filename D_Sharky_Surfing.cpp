#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define mxx 1e18 - 1
using namespace std;

ll bin_expo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        ll t = bin_expo(a, b / 2);
        return (1ll * t * t % MOD);
    }
    else
    {
        ll t = bin_expo(a, (b - 1) / 2);
        t = (1ll * t * t) % MOD;
        return (1ll * a * t % MOD);
    }
}

ll mod_inverse(ll x)
{
    return bin_expo(x, MOD - 2) % MOD;
}

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int rec(int i, vector<int> &prefixsum, vector<pair<int, int>> &p, int l)
{
    if (i == l)
    {
        return 0;
    }

    int jump = INT_MAX;
    for (int j = 0; j < p.size(); j++)
    {
        int x = p[j].first;
        int y = p[j].second;
        for (int z = x; z <= y; z++)
        {
            if (prefixsum[z] != 1)
            {
                jump = min(jump, 1 + rec(z, prefixsum, p, l));
            }
        }
    }

    int notjump = 1 + rec(i + 1, prefixsum, p, l);
    int ans = min(jump, notjump);
    return ((ans) == INT_MAX) ? -1 : ans;
}

void solve()
{
    int n, m, l;
    cin >> n >> m >> l;
    vector<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        q.push_back({l, r});
    }

    vector<pair<int, int>> p;
    for (int i = 0; i < m; i++)
    {
        int x, v;
        cin >> x >> v;
        p.push_back({x, x + v});
    }

    vector<int> prefixsum(l + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int l = q[i].first;
        int r = q[i].second;
        prefixsum[l]++;
        prefixsum[r + 1]--;
    }

    for (int i = 1; i <= l; i++)
    {
        prefixsum[i] += prefixsum[i - 1];
    }
    vector<int> dp(l + 1, -1);
    cout << rec(0, prefixsum, p, l) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
