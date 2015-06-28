#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
   for(int i=1;i<=t;++i)
    {
        ll x1,y1,x2,y2,num,den,hcf;
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        if(x1+y1==0)
        {
            printf("Case %d: 0\n",i);
            continue;
        }
        num=(x1*(x2+1))+(y1*(y2+1));
        den=(x1+y1)*(x2+y2+1);
        hcf=__gcd(num,den);
        if(hcf)
            printf("Case %d: %lld/%lld\n",i,num/hcf,den/hcf);
        else
            printf("Case %d: 0\n",i);

    }
    return 0;
}
