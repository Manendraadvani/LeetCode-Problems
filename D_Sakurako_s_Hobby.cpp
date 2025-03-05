#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i<n; i++){
            cin >> a[i];
            a[i]--;
        }

        string s;
        cin >> s;

        vector<int> vis(n), ans(n);
        for(int i = 0; i<n ;i++){
            if(vis[i]) continue;

            int cnt = 0; 
            int u = i;
            vector<int> path;
            while(!vis[u]){
                vis[u] = 1;
                cnt += s[u] == '0';
                path.push_back(u);
                u = a[u];
            }

            for(int v : path){
                ans[v] = cnt;
            }
        }

        for(int i = 0; i<n ;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}