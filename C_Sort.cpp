#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , q;
        string a , b;
        cin >> n >> q;
        cin >> a >> b;
        while(q--){
            int left;
            int right;
            cin >> left >> right;
            --left;
            --right;
            string copya = a.substr(left, right - left+1);
            string copyb = b.substr(left, right - left+1);

            sort(copya.begin() , copya.end());
            sort(copyb.begin() , copyb.end());

            unordered_map<int,int> mp1;
            unordered_map<int,int> mp2;
            for(auto i: copya){
                
                mp1[i]++;
            }

            for(auto i: copyb){
                
                mp2[i]++;
            }
            
            int cnt = 0;
            for(auto j: copya){
                char c = j;
                if(mp2.find(c) != mp2.end()){
                    cnt++;
                    mp2[c]--;
                    if(mp2[c] == 0){
                        mp2.erase(c);
                    }
                }
            }


            int ans = copya.length() - cnt;
            cout << ans << endl;
        }
    }
    return 0;
}