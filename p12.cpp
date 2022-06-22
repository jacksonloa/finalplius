//計算 i 次方的值//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, sum = 1;

    cin >> i;
    if(i > 31)
    {
        cout << "Value of more than 31\n";
        return 0;
    }
    if(i == 0) 
    {
        cout << "1\n";
        return 0;
    }
    for(int j = 0; j < i; j ++)
    {
        sum *= 2;
    }
    cout << sum << endl;
    return 0;
}