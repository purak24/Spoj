#include<bits/stdc++.h>
#define M 10000007
using namespace std;
typedef long long ll;
ll modexpo(ll a,ll b)
{
    ll d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%M;
        }
        b>>=1;
        a=(a*a)%M;
    }
    return d;
}
int main()
{
    ll n,k;
    while(scanf("%lld %lld",&n,&k) && n!=0)
    {
        ll a,b,c,d,ans;
        b = modexpo(n,k);
        a = (modexpo(n-1,k)<<1)%M;
        d = modexpo(n,n);
        c = (modexpo(n-1,n-1)<<1)%M;
        ans = ((a+b)%M +(c+d)%M)%M;
        printf("%lld\n",ans);
    }
    return 0;
}
