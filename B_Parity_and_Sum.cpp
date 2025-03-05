#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int f(vector<int> &even, vector<int> &odd){
    int n1 = even.size();
    int n2 = odd.size();

    long long mx = odd.back();
    int ans = 0;
    for(int i = 0 ; i<n1; i++){
        if(even[i] > mx){
            return (n1+1);
        }
        else{
            ans++;
            mx += even[i];
        }
    }
    return ans;

}
void solve(){
    int n;
    cin >> n;
    vector<int> odd, even;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x%2){
            odd.push_back(x);
        }
        else{
            even.push_back(x);
        }
    }

    if(odd.size() == 0 || even.size() == 0){
        cout << 0 << endl;
        return;
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int ans = f(even, odd);
    cout << ans << endl;
    return;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}