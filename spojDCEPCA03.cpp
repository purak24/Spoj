#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    int i,res=n;
    for(i=2; i*i<=n; i++)
    {
        if(n%i == 0)
            res-=res/i;
        while(n%i == 0)
            n/=i;
    }
    if(n>1)
        res-=res/n;
    return res;
}
int main()
{
    int t,n,i;
    long long int sum,H;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        H=0;
        sum=0;
        for(i=1; i<=n; i++)
        {
            sum+=func(i);
        }
        H=sum*sum;
        printf("%lld\n",H);
    }
    return 0;
}
