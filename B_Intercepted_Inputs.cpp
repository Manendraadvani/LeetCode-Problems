#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define mxx 1e18 - 1
using namespace std;

ll bin_expo(ll a, ll b){
    if(b == 0){
        return 1;
    }
    if(b%2 == 0){
        ll t = bin_expo(a,b/2);
        return (1ll * t * t % MOD);
    }
    else{
        ll t = bin_expo(a, (b-1)/2);
        t = (1ll * t * t) % MOD;
        return (1ll * a  * t % MOD);
    }
}

ll mod_inverse(ll x){
    return bin_expo(x, MOD-2) % MOD;
}

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int k;
    cin >> k;
    vector<int> a(k);
    unordered_map<int, int> mp;
    for(int i = 0; i<k; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    int size = k - 2;
    for(int i = 1; i*i<=size; i++){
        if(size%i == 0 ){
            int j = size/i;
            if(i != j && mp.count(i) && mp.count(j)){
                cout << i << " " << j << endl;
                return;
            }
            else if(i == j && mp[i] >= 2){
                cout << i << " " << j << endl;
                return;
            }
        }
    }
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

