//一維陣列反轉 II//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> num;
    int input;
    int cnt = 0;

    for(int i = 0; i < 6; i ++)
    {
        cin >> input;
        num.push_back(input);
        cnt ++;
    }

    for(int i = cnt-1; i >= 0; i--)
    {
        if(i == 0)
        {
            cout << num[i] << endl;
            break;
        }
        cout << num[i] << " ";
    }
    return 0;
}