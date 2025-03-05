#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    // 3 4 5 10 8 100 3 1
    cin >> n >> k >> l >> c >> d >>  p >> nl >> np;
    int ans1 = (k*l)/nl;  
    int ans2 = c*d; 
    int ans3 = p/np;

    cout << min(ans1,min(ans2,ans3))/n << endl;
    return 0;
} 