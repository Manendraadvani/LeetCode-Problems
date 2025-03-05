#include<iostream>
#define ll long long
using namespace std;

void solve(){
    ll x,y;
    cin >> x >> y;
    ll len = (y-x+1);
    ll l = 1;
    ll r = 1e9;
    ll ans = 1;
    while(l<=r){
        ll mid = (l+r)/2;
        ll val = ((mid*mid) - mid + 2)/2;
        if(val <= len){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid - 1;
        }
    }

    cout << ans << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}