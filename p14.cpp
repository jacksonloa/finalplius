//購票計算//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money, ten, five, one;

    cin >> money;
    ten = money / 10;
    five = (money - ten*10) / 5;
    one = money - ten*10 - five*5;
    cout << "NT10=" << ten << endl << "NT5=" << five << endl << "NT1=" << one << endl;
    return 0;
}