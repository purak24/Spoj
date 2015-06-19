#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int m,n,ans1,ans2;
        scanf("%lld %lld",&m,&n);
        ans1=m*(n/2);
        ans2=n*(m/2);
        if(ans1<ans2)
            printf("%lld\n", ans1);
        else
            printf("%lld\n", ans2);
    }
    return 0;
}
