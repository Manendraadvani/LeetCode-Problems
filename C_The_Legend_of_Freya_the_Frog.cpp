#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int x_jumps = x/k;
        if(x%k != 0){
            x_jumps++;
        }

        int y_jumps = y/k;
        if(y%k != 0){
            y_jumps++;
        }
        int ans = max(x_jumps,y_jumps)*2;
        if(x_jumps>y_jumps){
            ans--;
        }

        cout << ans << endl;

    }
}