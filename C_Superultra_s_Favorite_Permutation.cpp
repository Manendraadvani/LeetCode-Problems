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

bool isprime(int num){

    int cnt = 0;
    for(int i = 1; i*i<=num; i++){
        if(num % i == 0){
            cnt++;
            if((num/i) != i) cnt++;
        }
    }

    if(cnt == 2) return true;
    else return false;
}

void solve()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3 || n == 4)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans;
    for(int i = 1; i<=n; i+=2){
        ans.push_back(i);
    }

    int num = -1;
    for(int i = 2; i<=n; i+=2){
        if(!isprime(ans.back() + i)){
            num = i;
            break;
        }
    }

    ans.push_back(num);
    for(int i = 2; i<=n; i+=2){
        if(i != num){
            ans.push_back(i);
        }
    }

    if(ans.size() != n){
        cout << -1 << endl;
        return;
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
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
