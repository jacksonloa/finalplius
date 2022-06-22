//計算時間的組合//  
 
#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int input;  
    int day, hour, min, sec;  
  
    cin >> input;
    day = input / 86400;  
    hour = (input - (day*86400)) / 3600;  
    min = (input - (day*86400) - (hour*3600)) / 60;  
    sec = input - (day*86400) - (hour*3600) - (min*60); 
    cout << day << " days\n" << hour << " hours\n" << min << " minutes\n" << sec << " seconds\n";
    return 0;  
}  