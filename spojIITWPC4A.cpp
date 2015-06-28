#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s;
ll m,n,len,temp;
ll func()
{
    //Getting TLE
    /*ll count=0,pos=-m;
    string temp(m,'a');
    while((pos=s.find(temp,pos+m))!=-1)
        ++count;
    return count;*/
    ll i=0,ans=0;
    char prev = 'a';
    ll count=1;
    while(i<len && s[i]!='a')i++;
    if(i==len)return 0;
    for(i++;i<len;++i)
        {
          if(s[i]=='a' && prev=='a')++count;
          else if(s[i]=='a')
          {
              count=1;
          }
          else
          {
              ans+=count/m;
              count=0;
          }
          prev=s[i];
        }
    ans+=count/m;
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        scanf("%lld %lld",&m,&n);
        len = s.length();
        ll a = func();
        if(m==n)printf("%lld %lld\n",len,len);
        else if(m<n)
        {
            temp = len-a*m+a*n;
            printf("%lld %lld\n",len,temp);
        }
        else
        {
            temp = len-a*m+a*n;
            printf("%lld %lld\n",temp,len);
        }
    }
    return 0;
}
