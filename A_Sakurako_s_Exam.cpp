#include<iostream>
using namespace std;
void solve(){
    int a , b;
    cin >> a >> b;
    if(a%2 != 0 || (a == 0 && b % 2 != 0)){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    return ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}