#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> yzero(n + 1, 0), yone(n + 1, 0);
        ll yzerocnt = 0;
        ll yonecnt = 0;
        for(ll i = 0; i<n ;i++)
        {

            ll x, y;
            cin >> x >> y;
            if (y == 0)
            {
                yzerocnt++;
                yzero[x]++;
            }
            else
            {
                yonecnt++;
                yone[x]++;
            }
        }

        ll ans = 0;
        for (ll i = 0; i <= n; i++)
        {
            if (yzero[i] == 1 && yone[i] == 1)
            {
                ans += (yzerocnt - 1);
                ans += (yonecnt - 1);
            }

            if (yzero[i] == 1)
            {
                ll left = i - 1;
                ll right = i + 1;
                if (left >= 0 && right <= n && yone[left] == 1 && yone[right] == 1)
                {
                    ans++;
                }
            }

            if (yone[i] == 1)
            {
                ll left = i - 1;
                ll right = i + 1;
                if (left >= 0 && right <= n && yzero[left] == 1 && yzero[right] == 1)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}