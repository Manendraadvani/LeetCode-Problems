#include<bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

ll bottom_up(ll n, ll a, ll b, ll c)
{
    ll dp[n + 1];
    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll r1 = INT_MIN, r2 = INT_MIN, r3 = INT_MIN;
        if (i >= a)
        {
            r1 = 1+dp[i - a];
        }
        if (i >= b)
        {
            r2 = 1+dp[i - b];
        }
        if (i >= c)
        {
            r3 = 1+dp[i - c];
        }
        dp[i] = max(r1, max(r2, r3));
    }
    return dp[n];
}
int main()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << bottom_up(n, a, b, c) << endl;
    return 0;
}
