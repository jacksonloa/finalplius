//計算梯型面積//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float tl, bl, h;
    float sum = 0;

    cin >> tl >> bl >> h;
    sum = (tl + bl) * h / 2;

    cout << "Trapezoid area:" << fixed << setprecision(1) << sum << endl;
    return 0;
}