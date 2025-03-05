#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int m;
        vector<long long> petals(n);
        vector<long long> quantity(n);

        cin >> n >> m;
        for(int i = 0; i<n ; i++){
            cin >> petals[i] >> quantity[i];
        }
        
        vector<long long> finalpetal;
        for(int i = 0; i<n; i++){
            while(quantity[i]>0){
                finalpetal.push_back(petals[i]);
                quantity[i]--;

            }
        }
        sort(finalpetal.begin(), finalpetal.end());
        long long max_petals = 0;
        int left = 0;
        int right = 0;
        long long sum = 0;
        while(right<finalpetal.size()){
            sum+=finalpetal[right];
            while(finalpetal[right] - finalpetal[left] >1){
                sum-=finalpetal[left];
                left++;
            }
            while(sum>m){
                sum-=finalpetal[left];
                left++;
            }
            right++;
            max_petals=max(max_petals,sum);
        }

        cout << max_petals << endl;
    }
    return 0;
}
