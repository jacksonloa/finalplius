//迴文問題//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int check;

    while(cin >> str)
    {
        check = 1;
        for(int i = 0; i <str.length(); i ++)
        {
            if(str[i] != str[str.length()-1-i]) check = 0;
        }
        if(check == 1) cout << "YES\n";
        else if(check == 0) cout << "NO\n";
    }
    return 0;
}