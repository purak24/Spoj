#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        double ans = 2*sqrt(x*x-y*y);
        printf("%.3f\n",ans);
    }
    return 0;
}
