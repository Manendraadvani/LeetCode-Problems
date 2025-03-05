#include<iostream>
#include<vector>
using namespace std;

vector<long long> precompute;
void solve(){
    int l, r;
    cin >> l >> r;
    int ans = 0;
    int a = l;
    while(a != 0){
        ans++;
        a/=3;
    }
    ans *= 2;
    ans += precompute[r] - precompute[l];
    cout << ans << endl;
    return ;
}
int main(){
    precompute.resize(200001, 0);
    for(int i = 1; i<=200001; i++){
        int cnt = 0;
        int val = i;
        while(val != 0){
            val /= 3;
            cnt++;
        }
        precompute[i] = cnt;
    }
    for(int i = 1; i<=200001; i++){
        precompute[i] += precompute[i-1];
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}