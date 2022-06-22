//攝氏溫度轉華式溫度//

#include <bits/stdc++.h>
using namespace std;


int main()
{
    double c, f;

    cin >> c;
    f = c * 9 / 5 + 32;
    f = round(f*10) / 10;
    printf("%.1f\n", f);
    return 0;
}