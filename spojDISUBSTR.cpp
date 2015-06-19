#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        map < string , int> m;
        string s;cin>>s;
        int len = s.length();
        for(int i=0;i<len;++i)
            for(int j=i+1;j<=len;++j)
                m[s.substr(i,j-i)]++;
        printf("%d\n",(int)m.size());
    }
    return 0;
}
