//計算1~N內能被2跟3整除，但不能被12整除的整數總和//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int n;  
    int sum = 0;  
  
    cin >> n;  
    for(int i = 1; i <= n; i ++)  
    {  
        if(((i%6) == 0) && ((i%12) != 0))  
        {  
            sum += i;  
        }  
    }  
    cout << sum << endl;;  
    return 0;  
}  