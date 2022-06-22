//相遇時間計算//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dis;
    float sec;

    cin >> dis;

    sec = dis / 0.238;
    sec = ceil(sec);
    printf("%d\n", (int)sec);

    return 0;
}