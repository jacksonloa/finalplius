//輸出 1*1、2*2、...、N*N之結果//  
 
#include <bits/stdc++.h>
using namespace std;  
  
int main()  
{  
    int n;  
  
    cin >> n;  
    for(int i = 1; i <= n; i ++)  
    {  
        cout << i << "*" << i << "=" << i*i << endl;
    }  
    return 0;  
}  