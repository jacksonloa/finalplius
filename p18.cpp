//判斷座標是否在正方形的範圍內//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int x, y;  
  
    cin >> x >> y;  
    if(x <= 100 && y <= 100) cout << "inside\n";  
    else cout << "outside\n";
    return 0;  
}  