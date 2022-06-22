//季節判定//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int mon;  
  
    cin >> mon; 
    if(mon >= 3 && mon <= 5)  
    {  
        cout << "Spring\n";
    }  
    else if(mon >= 6 && mon <= 8)  
    {  
        cout << "Summer\n";
    }  
    else if(mon >= 9 && mon <= 11)  
    {  
        cout << "Autumn\n";  
    }  
    else if(mon == 12 || mon == 1 || mon == 2)  
    {  
        cout << "Winter\n"; 
    }  
    return 0;  
}  