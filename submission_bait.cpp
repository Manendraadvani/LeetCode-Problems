#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int ct = 0;
        bool ans = false;
        for(int i = 0; i<n ; i++){
            if(i == 0 || arr[i] == arr[i-1])ct++;
            else{
                if(ct%2 != 0){
                    ans = true;
                }
                ct = 1;
            }
        }
        if(ct%2 != 0) ans = true;

        cout << (ans ? "YES" : "NO") << endl;
        
    }
    return 0;
}