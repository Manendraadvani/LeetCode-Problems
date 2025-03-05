#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);

        for(int i = 0;i< n;i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        int ans = 0;
        for(int i = 0; i<n-1; i+=2){
            if(i < n-1 && k>=(arr[i] - arr[i+1])){
                k -= (arr[i] - arr[i+1]);
            }
            else{
                ans += ((arr[i] - arr[i+1]) - k);
                k = 0;
            }
        }

        if(n%2 == 1){
            ans += arr.back();
        }

        cout << ans << endl;
    }
}