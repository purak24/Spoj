//Maths concept
//Coupon collector's Problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double ans=0;
        for(int i=1;i<=n;++i)
            ans+=1.0/i;
        ans*=n;
        printf("%.2lf\n",ans);
    }
    return 0;
}
