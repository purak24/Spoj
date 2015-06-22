#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll guests;
        scanf("%lld",&guests);
        ll ans = ll(sqrt(1+4*(guests-1)*2)-1)>>1;
        printf("%lld\n",ans);
    }
    return 0;
}
