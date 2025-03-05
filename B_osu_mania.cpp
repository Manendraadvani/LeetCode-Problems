#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans;
        while(n--){
            string s;
            cin >> s;
            for(int i = 0; i<s.length(); i++){
                if(s[i] == '#'){
                    ans.push_back(i+1);
                }
            }
        }

        reverse(ans.begin(), ans.end());

        for(auto i: ans){
            cout << i << " ";
        }
        cout << endl;

    }
}