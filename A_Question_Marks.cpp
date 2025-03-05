#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char,int> mp;

        for(int i = 0; i<s.length() ; i++){
            mp[s[i]]++;
        }

        int cnt = 0;

        if(mp.find('A') != mp.end()){
            if(mp['A'] >= n){
                cnt+= n;
            }
            else{
                cnt+= mp['A'];
            }
        }

        if(mp.find('B') != mp.end()){
            if(mp['B'] >= n){
                cnt+= n;
            }
            else{
                cnt+= mp['B'];
            }
        }

        if(mp.find('C') != mp.end()){
            if(mp['C'] >= n){
                cnt+= n;
            }
            else{
                cnt+= mp['C'];
            }
        }
        if(mp.find('D') != mp.end()){
            if(mp['D'] >= n){
                cnt+= n;
            }
            else{
                cnt+= mp['D'];
            }
        }

        cout << cnt << endl;
    }

    return 0;
}