//計算兩整數間所有整數的總和//  
 
#include <bits/stdc++.h>
using namespace std;  
  
int main()  
{  
    int n1, n2;  
  
    cin >> n1 >> n2; 
    cout << (n1+n2)*(n2-n1+1)/2 << endl; 
    return 0;  
}  