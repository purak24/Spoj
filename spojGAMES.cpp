#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
    return a%b == 0 ? b : hcf(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       string str;
       cin>>str;
       int len = str.length();
       int c=0,flag=0;
       for(int i=len-1;i>=0;--i)
       {
           if(str[i]=='.')
           {
               flag=1;
               break;
           }
           else c++;
       }
       int number=0;
       if(flag)
       {
           for(int i=0;i<len;++i)
           {
               if(str[i]=='.')continue;
               number = number*10 + (str[i]-'0');
           }
           //cout<<number<<" "<<pow(10,c)<<" "<<hcf(number,pow(10,c))<<endl;
           printf("%d\n", ((int)(pow(10,c)))/hcf(number,pow(10,c)));
       }
       else printf("1\n");
    }
    return 0;
}
