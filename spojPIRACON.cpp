#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;++i)
    {
        ll k;
        scanf("%lld",&k);
        ll total = k*(2*k*k+6*k-5)/3;
        ll tringus = 2*((k*k)-k);
        printf("Pyramid E. Nro# %d: %lld\nTringus: %lld\n",i,total,tringus);
    }
    return 0;
}
