//Armstrong數//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int n;  
    int originaln, remain, sum = 0;  
  
    cin >> n;  
    originaln = n;  
    while(originaln != 0)  
    {  
        remain = originaln % 10; // 取出最右邊的數  
        sum += remain * remain * remain; // 加總到sum  
        originaln /= 10; // 將originaln減少一位  
    }  
    if(sum == n) cout << "Yes\n";  
    else cout << "No\n";  
    return 0;  
}  