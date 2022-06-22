//計算薪水//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hour, sal;
    float tol;
    int ti, t2, t3;

    cin >> hour >> sal;

    if(hour <= 60) tol = hour * sal;
    else if(hour > 60)
    {
        int tmp1 = hour - 60;
        int tmp2 = tmp1 - 60;
        tmp1 -= tmp2;

        tol = 60 * sal + tmp1 * sal * 1.33;
        if(tmp2 > 0)
        {
            tol += tmp2 * sal * 1.66;
        }
    }

    cout << fixed << setprecision(1) << tol << endl;
    return 0;
}