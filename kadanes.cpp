#include<iostream>
using namespace std;

int kandanes(int *arr,int n){

    // dp approach
    
    // vector<int> dp(size, 0);
    // dp[0] = a[0];
    // int ans = dp[0];
    // for (int i = 1; i < size; i++) {
    //     dp[i] = max(a[i], a[i] + dp[i - 1]);
    //     ans = max(ans, dp[i]);
    // }
    // cout << ans;

    int current_sum = 0;
    int best_sum = 0;
    for(int i = 0; i<n; i++){
        current_sum += arr[i];
        if(best_sum < current_sum){
            best_sum = current_sum;
        }
        if(current_sum<0){
            current_sum = 0;
        }
    }
    return best_sum;

}
int main(){
    int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(a) / sizeof(a[0]);

    // Function Call
    int max_sum = kandanes(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}