#include<iostream>
#include <bits/stdc++.h>

using namespace std;

bool isvalid(int time, int tp, int p){
    if(p + 20 * (time - tp) + time <= 1000){
        return true;
    }
    
    return false;
}
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int tp;
        int p;
        cin >> tp >> p;
        int l = p;
        int r = 299;
        int ans = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(isvalid(mid,tp,p)){
                l = mid+1;
                ans = mid - tp;
            }
            else{
                r = mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
