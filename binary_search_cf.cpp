#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;

        ll l = 0, r = n - 1, mid;
        bool flag = false;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}