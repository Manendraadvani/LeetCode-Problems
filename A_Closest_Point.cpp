#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    if(arr.size() <= 1 || (arr.size() == 2 && abs(arr[0] - arr[1]) != 1)){
        cout << "YES" << endl;
        return ;
    }

    cout << "NO" << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}