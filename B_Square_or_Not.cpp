#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool perfectsquare(int n){
    if(n == 0) return true;

    for(int i = 1; i*i <= n ; i++){
        if(n%i == 0 && n/i == i){
            return true;
        }
    }

    return false;
}


bool isbeautiful(string s, int n, int root){
    for(int i = 1; i<=root; i++){
        for(int j = 1; j<=root; j++){
            if(i == 1 || i == root || j == 1 || j == root ){
                if(s[(i-1)*root + j - 1] != '1'){
                    return false;
                }
            }
            else{
                if(s[(i-1)*root + j - 1] != '0'){
                    return false;
                }
            }
        }
    }

    return true;
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    if(!perfectsquare(n)){
        cout << "No" << endl;
        return ;
    }

    int root = sqrt(n);
    if(!isbeautiful(s, n, root)){
        cout << "No" << endl;
        return ;
    }

    cout << "Yes" << endl;
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
}