#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n] , mx = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        mx = max(a[i], mx);
    }
    sort(a,a+n);
    int left = mx, right = mx+k-1, ans = left;
    for(int i = 0; i<n; i++){
        int diff = left - a[i];
        int mul = diff/(k*2);
        int low = mul*2*k + a[i];

        if(diff%(k*2)>=k){
            low+=(k*2);
        }

        int high = low + k -1;
        left = max(low,left);
        right = min(right, high);

        if(left > right){
            cout << -1 << endl;
            return ;
        }
        ans = left;
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