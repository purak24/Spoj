//Stirlings approximation
//N! ~ sqrt(2*PI*N)*(N/e)^N
//...
//N*(2*PI*N)^(1/2N) >= A*e

#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846
int bSearch(int a)
{
    int l=0,r=10000000000;
    int n=0;
    double want = a * exp(1.0);
    while(l<=r)
    {
        int m = (l+r)/2;
        double val = pow(PI*2.0* ((double)m), 1.0 / (2.0 * (double)m))*(double)m;
        if(val<=want)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
            n=m;
        }
    }
    return n;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        printf("%d\n",bSearch(a));
    }
    return 0;
}
