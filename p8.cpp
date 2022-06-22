//計算正方形面積//

#include <bits/stdc++.h>
using namespace std;


int main()
{
    double len, A;

    cin >> len;
    A = len * len;
    A = round(A*10) / 10;
    printf("%.1f\n" , A);
    return 0;
}