#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;++i)
    {
        ll n;
        scanf("%lld",&n);
        n=(ll)(sqrt(n+1))-1;
        printf("Case %d: %lld\n",i,n);
    }
    return 0;
}
