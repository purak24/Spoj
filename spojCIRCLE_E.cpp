#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double r1,r2,r3;
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        double ans;
        //output = (a * b * c) / (a*b + b*c + c*a + 2*sqrt(a*b*c*(a+b+c)));
        ans = (r1*r2*r3)/(r1*r2+r2*r3+r1*r3+2*sqrt(r1*r2*r3*(r1+r2+r3)));
        printf("%.6lf\n",ans);
    }
    return 0;
}
