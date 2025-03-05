#include<iostream>
using namespace std;
void solve(){
        string s;
        cin >> s;

        if(s.length() %2 == 1){
            cout << "NO" << endl;
            return;
        }

        int i = 0;
        int j = s.length()/2;
        while(j < s.length()){
        
            if(s[i] != s[j]){
                cout << "NO" << endl;
                return;
            }

            i++;
            j++;

        }

        cout << "YES" << endl;
        return;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}