#include<iostream>
using namespace std;

bool subs_possible(string s, string t){
    int n = s.size();
    int m = t.size();
    int j = 0;
    for(int i = 0 ; i<n; i++){
        if(j<m && (s[i] == t[j] || s[i] == '?')){
            j++;
        }
    }
    return j == m;
}
string newstring(string s, string t){
    int n = s.size();
    int m = t.size();
    int j = 0;
    for(int i = 0; i<n ;i++){
        if(j<m && (s[i] == t[j] || s[i] == '?')){
            if(s[i] == '?'){
                s[i] = t[j];
            }
            j++;
        }else if(s[i] == '?'){
            s[i] = 'a';
        }
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        if(subs_possible(s,t)){
            cout << "YES" << endl;
            cout << newstring(s,t) << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}