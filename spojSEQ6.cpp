//http://math.stackexchange.com/questions/139842/in-how-many-ways-can-a-number-be-expressed-as-a-sum-of-consecutive-numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,res;
    float x;
    while(scanf("%d",&n) && n!=0)
    {
        res=0;
        n=2*n;
        x=sqrt(n);
        for(i=1;i<x;++i)
        {
            if(n%i==0)
                res+=i%2+(n/i)%2;
        }
        if(n%i==0 && i*i==n)
            res+=i%2;
            printf("%d\n",2*res);
    }
    return 0;
}
