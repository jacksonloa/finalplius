//算階乘//  
  
#include <bits/stdc++.h>
using namespace std;

int main()  
{  
    long int n;  
    long int sum = 1;  
  
    cin >> n;  
    for(long int i = 1; i <= n; i ++)  
    {  
        sum *= i;  
    }  
    cout << sum << endl;;  
    return 0;  
}  