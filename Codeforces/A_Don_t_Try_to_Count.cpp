#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define mxx 1e18 - 1
using namespace std;
const int N = 1e7 + 10;

vector<bool> is_prime(N, 1);
void sieveoferanthosis()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

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

bool isprime(ll num)
{

    ll cnt = 0;
    for (ll i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cnt++;
            if ((num / i) != i)
                cnt++;
        }
    }

    if (cnt == 2)
        return true;
    else
        return false;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int cnt = 0;
    if(x.find(s) != string::npos){
        cout << cnt << endl;
        return;
    }
    int c = 6;
    while(c--){
        x += x;
        cnt++;
        if(x.find(s) != string::npos){
            cout << cnt << endl;
            return;
        }
    }

    cout << - 1 << endl;
    return;
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


