#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        int k;
        cin >> n;
        cin >> k; 

        if(k == 0){
            cout << 0 << endl;
            continue;
        }
        if(k<=n){
            cout << 1 << endl;
            continue;
        }
        int i = 0;
        int diagonals = 0;
        while(k>0){
            k-=n;
            diagonals++;
            if(k<=0){
                break;
            }
            if(k > 0 && i!= 0){
                diagonals++;
                k-=n;
            }

            i++;
            n--;
        }

        cout << diagonals << endl;
    }
    return 0;
}