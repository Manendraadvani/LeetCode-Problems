#include<iostream>
#define ll long long
using namespace std;

pair<ll,ll> getleftrightval(ll start, ll end, ll mid){
    ll totalrangesum = (end*(end+1))/2ll;
    ll midsum = (mid*(mid+1))/2ll;
    ll leftrange = midsum - (start*(start-1))/2ll;
    ll rightrange = totalrangesum - midsum;
    return {leftrange, rightrange};
}

void solve(){
    ll n,k;
    cin >> n >> k;
    ll start = k;
    ll end = k + (n-1);
    ll ans = 1e18;
    ll l = start;
    ll r = end;

    while(l<=r){
        ll mid = (l+r)/2;
        pair<ll,ll> leftrightpair = getleftrightval(start,end,mid);
        ll leftval = leftrightpair.first;
        ll rightval = leftrightpair.second;
        ans = min(ans, abs(leftval - rightval));
        if(leftval < rightval){
            l = mid+1;
        }
        else{
            r = mid-1;
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