#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
void solve(){
    string num;
    cin >> num;

    if(num.size() <= 2){
        cout << "NO" << endl;
        return;
    }
    if(num == "100" || num == "101"){
        cout << "NO" << endl;
        return;
    }

    if(num[0] == '1' && num[1] == '0' && num[2] != '0'){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
        
    }

    return 0;
}
