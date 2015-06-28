//Based on Pascal Triangle fact
//Check countSetBits function
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll countSetBits(ll n)
{
    ll count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll a = 1<<countSetBits(n);
        ll b = n+1-a;
        printf("%lld %lld\n",b,a);
    }
    return 0;
}
