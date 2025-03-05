#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void solve(vector<int> &arr){
    int n = arr.size();
    unordered_map<char,int> mp;
    unordered_map<int, char> mp2;
    string s;
    cin >> s;
    if(s.size() != arr.size()){
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i<n; i++){
        if(mp.find(s[i]) != mp.end()){
            if(mp[s[i]] != arr[i]){
                cout << "NO" << endl;
                return ;
            }
        }

        if(mp2.find(arr[i]) != mp2.end()){
            if(mp2[arr[i]] != s[i]){
                cout << "NO" << endl;
                return;
            }
        }

        mp2[arr[i]] = s[i];
        mp[s[i]] = arr[i];
    }

    cout << "YES" << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int m ;
        cin >> m;
        while(m--){
            solve(arr);
        }
    }
}