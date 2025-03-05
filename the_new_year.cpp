#include<iostream>
using namespace std;

int main(){
    int x1, x2 ,x3;
    cin >> x1 >> x2 >> x3;

   int d1 = abs(x1 - x2) + abs(x1- x3);
   int d2 = abs(x2-x1) + abs(x2 - x3);
   int d3 = abs(x3 - x1) + abs(x3 - x2);

   cout << min(d1, min(d2,d3));
   return 0;
}