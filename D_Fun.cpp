#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int ans = 0;

        for(int a = 1; a<=n && a<=x; a++){
            for(int b = 1; a*b <= n && a+b<=x; b++){
                int c1 = x-a-b;
                int c2 = (n - a*b)/(a+b);

                ans+= min(c1,c2);
            }
        }

        cout << ans << endl;

    }
    return 0;
}