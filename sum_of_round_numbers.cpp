#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int cnt = 0;
        vector<int>ans;

        int num = n;
        int multiplier = 1;

        while(num!=0){
            int rem = num%10;
            num = num/10;
            if(rem != 0){
                cnt++;
                ans.push_back(rem * multiplier);
            }
            multiplier = multiplier * 10;
        }
        cout << cnt << endl;

        while(!ans.empty()){
            cout << ans.back() << " ";
            ans.pop_back();
        }
        cout << endl;
    }
    return 0;
}