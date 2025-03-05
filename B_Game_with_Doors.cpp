#include<iostream>
using namespace std;
void solve(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int l = max(a,x);
    int r = min(b,y);
    if(r < l){
        cout << 1 << endl;
    }
    else if(r == l){
        cout << 2 << endl;
    }
    else{
        int ans = 0;
        if(a != x){
            ans++;
        }
        if(y != b){
            ans++;
        }
        ans += (r-l);
        cout << ans << endl;
    }
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}