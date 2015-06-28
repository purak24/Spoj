#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll realMangoes = 0;
        ll temp = ((n-1)>>1);
        realMangoes = (temp * temp)%n;
        printf("%lld\n",realMangoes);
    }
    return 0;
}
