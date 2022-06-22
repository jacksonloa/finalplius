//判斷座標是否在圓形的範圍內//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int x, y, len;  
    int i = 0;  
  
    cin >> x >> y;  
    len = x * x + y * y;  
    while(i*i < len)  
    {  
        i ++;  
    }  
    if(i <= 100) cout << "inside\n";  
    else cout << "outside\n";  
    return 0;  
}  