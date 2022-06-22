//判斷3整數是否能構成三角形之三邊長//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int r1, r2, r3;  
  
    cin >> r1 >> r2 >> r3; 
  
    if(r1+r2 > r3 && r1+r3 >r2 && r2+r3 > r1)  
    {  
        cout << "fit\n";
    }  
    else   
    {  
        cout << "unfit\n";
    }  
    return 0;  
}  