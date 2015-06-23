/*Wilson's Theorem & Fermat's Theorem
if N>=P ans=0
if N=P-1 ans=P-1 using wilson's theoram
if N<P-1 then we can use the follwing from wilson's theorem as it is given that abs(N-P)<=1000
(m-1)! ≡ -1 (mod m)
1 * 2 * 3 * ... * (n-1) * n * (n+1) * ... * (m-2) * (m-1) ≡ -1 (mod m)
n! * (n+1) * ... * (m-2) * (m-1) ≡ -1 (mod m)
n! ≡ -1*[(n+1) * ... * (m-2) * (m-1)]-1 (mod m)*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pow_mod(ll a,ll b,ll m)
{
    ll x=1,y=a;
    while(b>0)
    {
        if(b & 1)x=(x*y)%m;
        y=(y*y)%m;
        b/=2;
    }
    return x;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,p,res=-1,temp;
        scanf("%lld %lld",&n,&p);
        if(n>=p)
        {
            printf("0\n");
            continue;
        }
        for(int i=n+1; i<p; i++)
        {
            temp=pow_mod(i,p-2,p);
            res=(res*temp)%p;
        }
        printf("%lld\n",p+res);
    }
    return 0;
}
