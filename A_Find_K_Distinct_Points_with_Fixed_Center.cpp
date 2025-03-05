#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;
        vector<pair<int,int>> v;
        if(k%2 == 1){
            v.push_back({x,y});
        }

        for(int i = 1;i <=k/2; i++){
            v.push_back({x-i,y-i});
        }

        for(int i = 1; i<=k/2; i++){
            v.push_back({x+i, y+i});
        }

        for(auto it: v){
            cout << it.first << " " << it.second << endl;
        }


    }

    return 0;
}