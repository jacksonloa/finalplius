//計算平方值與立方值//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, power, cube;
    
    cin >> num;
    power = num * num;
    cube = num * num * num;

    cout << num << " " << power << " " << cube << endl;
    return 0;
}