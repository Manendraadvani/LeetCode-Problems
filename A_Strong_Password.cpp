#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string news = "";
        if(s.length() == 0){
            news = news+'a';
        }
        if(s.length() == 1){
            news += s[0];
            for(char i = 'a' ; i <= 'z' ; i++){
                if(s[0] != i){
                    news += i;
                    break;
                }
            }
        }
 
        if(s.length() > 1){
            for(int i = 0; i<s.length(); i++){
                news += s[i];
                if(i == s.length() - 1){
                    for(char c = 'a' ; c <= 'z' ; c++){
                        if(s[i] != c){
                            news += c;
                            break;
                        }
                    }
                    break;
                }
                if(s[i] == s[i+1]){
                    for(char j = 'a' ; j <= 'z' ; j++){
                        if(s[i] != j){
                            news += j;
                            break;
                        }
                    }
 
                    for(int x = i+1; x<s.length(); x++){
                        news += s[x];
                    }
                    break;
                }   
            }
        }
 
        cout << news << endl;
    }
    return 0;
}