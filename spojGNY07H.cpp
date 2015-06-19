#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int dp[1001];
    dp[0]=1;
    dp[1]=1;
    dp[2]=5;
    dp[3]=11;
    for(int i=4;i<1001;++i)
        dp[i] = 5*dp[i-2]+dp[i-1]+dp[i-3]-dp[i-4];
    scanf("%d",&t);
    for(int i = 1 ; i<=t ; i++)
    {
            int n;
            scanf("%d",&n);
            printf("%d %d\n",i,dp[n]);
    }
    return 0;
}
