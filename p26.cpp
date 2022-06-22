//計算1到N之間屬於5和7的倍數//  
 
#include <bits/stdc++.h>
using namespace std;    
  
int main()  
{  
    int n, cnt = 0;  
    int number[500] = {0};  
  
    cin >> n;  
    for(int i = 1; i <= n; i ++)  
    {  
        if(i % 35 == 0)  
        {  
            number[cnt] = i;  
            cnt ++;  
        }  
    }  
    for(int i = 0; i < cnt; i ++)  
    {  
        if(i == (cnt-1))  
        {  
            cout << number[i] << endl;
        }  
        else cout << number[i] << " ";  
    }  
    return 0;  
}  