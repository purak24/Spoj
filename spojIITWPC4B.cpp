//Integer triangles with given perimeter
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,ans;
        scanf("%lld",&n);
        if(n%2)
            ans = (n+3)*(n+3);
        else
            ans = n*n;
        if(ans%48>24)
            ans = ans/48 + 1;
        else
            ans = ans/48;
        printf("%lld\n",ans);
    }
    return 0;
}
