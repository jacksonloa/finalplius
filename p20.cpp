//求最大公因數//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int i1, i2, tmp = 1;  
  
    cin >> i1 >> i2;  
    while(tmp != 0)  
    {  
        tmp = i1 % i2;  
        i1 = i2;  
        i2 = tmp;  
    }  
    cout << i1 << endl;;  
    return 0;  
}  