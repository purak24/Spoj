#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fact(ll n)
{
    ll f=1;
    for(int i=2;i<=n;++i)
        f*=i;
    return f;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    ll ans = fact(n)+(1<<n)-n;
    printf("%lld",ans);
    return 0;
}
