#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,temp,sum=0;
        scanf("%d",&n);
       for(i=0;i<n;++i)
            {
                scanf("%d",&temp);
                sum+=temp;
            }
        if(sum%n)printf("%d\n",n-1);
        else printf("%d\n",n);
    }
    return 0;
}
