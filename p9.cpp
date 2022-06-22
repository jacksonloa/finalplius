//英哩轉公里//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int miles;
    double km;

    cin >> miles;
    km = miles * 1.6;
    km = round(km*10) / 10;
    printf("%.1f\n", km);
    return 0;
}