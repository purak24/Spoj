
#include<bits/stdc++.h>
using namespace std;
int check[32000];
int prime[10000];
void sieve()
{
    for(int i=3;i<=180;i+=2)
        if(!check[i])
        {
            for(int j=i*i;j<=32000;j+=i)
                check[j]=1;
        }
    prime[0] = 2;
    int j=1;
    for(int i=3;i<=32000;i+=2)
        if(!check[i])
            prime[j++]=i;
}
int func(int a,int b)
{
    int ans=a;
    for(int i=1;i<b;++i)ans*=a;
    return ans;
}
int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int temp,count=0;
        long long int sum=1;
        scanf("%d",&temp);
        int n = temp;
        int k=0;
        for(int j=prime[k];j*j<=temp;j=prime[++k])
        {
            count=0;
            while(temp%j==0)
            {
                count++;
                temp/=j;
            }
            sum *= (func(prime[k],count+1)-1)/(prime[k]-1);
        }
        if(temp>1)sum*=(temp+1);
        printf("%lld\n",sum-n);
    }
    return 0;
}
