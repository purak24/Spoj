#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, sum = 1, count1 = 0, count2 = 0, count3 = 0, etc;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cin >> s;
        if (s == "1/2")count1 ++;
        else if (s == "1/4")count2 ++;
        else count3 ++;
    }
    sum += count3 + count1/2.0 + 0.5;
    etc = count3 + (count1%2)*2;
    if (count2 >= etc)
    {
        count2 -= etc;
        sum += count2 / 4.0 + 0.75;
    }
    cout << sum << endl;
    return 0;
}
