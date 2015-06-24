#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll N,K,T,F;
        scanf("%lld%lld%lld%lld",&N,&K,&T,&F);
        ll ans = N+K*((F-N)/(K-1));
        printf("%lld\n",ans);
    }
    return 0;
}
