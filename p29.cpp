//平、閏年判定//

#include <bits/stdc++.h>
using namespace std;

  
int main()  
{  
    int year;  
  
    cin >> year;  
    if(year%4 == 0)  
    {  
        if(year%100 == 0 && year%400 != 0)  
        {  
            cout <<  "Common Year\n";
        }  
        else if(year%100 == 0 && year%400 == 0)  
        {  
            cout << "Bissextile Year\n";
        }  
    }  
    else cout << "Common Year\n";
    return 0;  
}  