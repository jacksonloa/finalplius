//計算陣列中所有元素的立方和//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    int cnt = 0;
    int cubic;

    for(int i = 0; i < 6; i ++)
    {
        cin >> input;
        cubic = input * input * input;
        cnt += cubic;
    }

    cout << cnt << endl;
    return 0;
}