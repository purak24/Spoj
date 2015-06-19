#include<bits/stdc++.h>
using namespace std;
/*map <int,int> memo;
int func(int n)
{
    if(n==0)return 0;
    if(memo[n] == 0)memo[n] = func(n-1) + 3*n-1;
    return memo[n];
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",func(n));
    }
}*/
int main()
{
    int t;
    scanf("%d",&t);
    long long n,ans;
    while(t--)
    {
        scanf("%lld",&n);
        ans=n*(3*n+1)/2;
        ans%=1000007;
        printf("%lld\n",ans);
    }
    return 0;
}
