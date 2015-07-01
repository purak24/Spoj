#include<bits/stdc++.h>
using namespace std;
void flip(char &c)
{
    c=c=='0'?'1':'0';
}
int main()
{
    int flag;
    int t=1,i,ans;
    string s;
    while(cin>>s)
    {
        flag=0;
        ans=0;
        for(i=0;i<s.length();++i)
        {
            if(flag)flip(s[i]);
            if(s[i]=='1')
            {
                flip(s[i]);
                flag=flag==0?1:0;
                ++ans;
            }
        }
        printf("Game #%d: %d\n",t++,ans);
    }
    return 0;
}
