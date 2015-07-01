#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll toh(int n)
{
    ll val=0;
    while(n>0)
    {
        val=3*val+2;
        n--;
    }
    return val;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",toh(n));
    }
    return 0;
}
