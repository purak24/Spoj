#include<bits/stdc++.h>
using namespace std;
long long dp[20001];
double dp2[4];
double dp4[10001];
int eval(int h)
{
    double a=1;
    dp4[1] = cos(M_PI/(h+1));
    //dp4[2] = cos(M_PI*2/(h+1));
    dp4[2] = 2*dp4[1]*dp4[1] - 1;
    if(dp[h])return dp[h];
    for(int j=1;j<=2;++j)
        for(int k=1;k<=h/2;++k)
        {
            double dp3 = dp4[k]!=0?dp4[k]:(dp4[k]=2*dp4[k-1]*dp4[1]-dp4[k-2]);
            dp3*=dp3;
            a*=dp2[j]+ dp3*4 ;
        }
    return (dp[h]=(long long)a);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=2;++j)dp2[j]=4*pow(cos(M_PI*j/6),2);
    while(t--)
    {
        int n,j;
        char c;
        scanf("%d %c %d",&n,&c,&j);
        int i = c-'a'+1;
        if(n%2==0)printf("0\n");
        else
        {
            if(i>1 && j>1)printf("%d\n",eval(n-1));
            else printf("%d\n",eval(n));
        }
    }
    return 0;
}
