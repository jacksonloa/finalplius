//判斷是何種三角形//  
//1. 直角三角形：其中有兩個邊的平方和等於第三邊的平方。  
//2. 鈍角三角形：其中有兩個邊的平方和小於第三邊的平方。  
//3. 銳角三角形：任兩邊的平方和大於第三邊的平方。  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int r1, r2, r3;  
    int o1, o2, o3; // 平方結果  
  
    cin >> r1 >> r2 >> r3;  
    if((r1+r2 <= r3) || (r2+r3 <= r1) || (r1+r3 <= r2))  
    {  
        cout << "Not Triangle\n";
        return 0;  
    }  
    o1 = (r3*r3) + (r2*r2);  
    o2 = (r1*r1) + (r3*r3);  
    o3 = (r1*r1) + (r2*r2);  
    if((r1*r1) < o1 && (r2*r2) < o2 && (r3*r3) < o3)  
    {  
        cout << "Acute Triangle\n";
        return 0;  
    }  
    if((r1*r1) == o1 || (r2*r2) == o2 || (r3*r3) == o3)  
    {  
        cout << "Right Triangle\n";
        return 0;  
    }  
    else cout << "Obtuse Triangle\n";
    return 0;  
}  