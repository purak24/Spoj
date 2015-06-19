#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=1;
    while(s[0]!='-')
    {
        string temp="";
        int ans,c=0;
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='}' && temp[c-1]=='{'){temp = temp.substr(0,temp.size()-1);--c;continue;}
            temp += s[i];
            c++;
        }
        int r=0,s1=0;
        for(int i=0;i<temp.length();++i)if(temp[i]=='{')++r;
        s1 = temp.length()-r;
        if(r%2 == 0 || s1%2 == 0)ans = (r+s1)/2;//NOTE -> formulae
        else ans = (r+s1-2)/2 + 2;//NOTE -> formulae
        cout<<t<<". "<<ans<<endl;
        t++;
        cin>>s;
    }
    return 0;
}
