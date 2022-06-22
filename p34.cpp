//1~N之間的總和//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int n;  
    int sum = 0;  
  
    cin >> n;  
    sum = (1+n) * n / 2;  
    for(int i = 1; i <= n; i ++)  
    {  
        if(i == n)  
        {  
            cout << i << " = ";  
            break;  
        }  
         cout << i << " + "; 
    }  
    cout << sum << endl;  
    return 0;  
}  