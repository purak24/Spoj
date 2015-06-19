#include<bits/stdc++.h>
using namespace std;
int check[7995];
int prime[501];
int dp[7995][4];
void sieve()
{
    for(int i=3;i<=90;i+=2)
        if(!check[i])
        {
            for(int j=i*i;j<=7994;j+=i)
                check[j]=1;
        }
    prime[0] = 2;
    int j=1;
    for(int i=3;i<=7994;i+=2)
        if(!check[i] && (i-1)%4 == 0 )
        {
            prime[j++]=i;
            i+=2;
        }
}
int solve(int n,int k)
{
    if(n==0)return (dp[n][k] = 1);
    if(dp[n][k])return dp[n][k];
    int i,temp=0;
    for(i=k;i>0;i--)
        if(n-i>=0)
        {
            //printf("solve(%d,%d)\n",n-i,i);
            temp+=solve(n-i,i);

        }
    return (dp[n][k] = temp);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        sieve();
        n = prime[n-1];
        printf("%d\n",solve(n,k));
        //printf("My ans = %d\n",solve(6,3));
    }
    return 0;
}
