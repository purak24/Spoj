#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int arr[100];
int sum(int a,int b)
{
    int sum=0;
    for(int i=a;i<=b;++i)
    {
        sum += arr[i];
        sum%=100;
    }
    return sum;
}
int rec(int a,int b)
{
    if(dp[a][b]!=-1)return dp[a][b];
    if(a==b)return 0;
    int ret=dp[a][b];
    for(int k=a;k<b;++k)
    {
        int temp = rec(a,k)+rec(k+1,b)+sum(a,k)*sum(k+1,b);
        if(ret==-1 || temp<ret)
            ret = temp;
    }
    return (dp[a][b]=ret);
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        memset(dp,-1,sizeof dp);
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        printf("%d\n",rec(0,n-1));
    }
    return 0;
}
