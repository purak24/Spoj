#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,u,l,r,val,q;
        scanf("%d %d",&n,&u);
        int arr[n+1];
        for(int i=0;i<n+1;++i)arr[i]=0;
        for(int i=0;i<u;i++)
        {
            scanf("%d %d %d",&l,&r,&val);
            arr[l]+=val;
            arr[r+1]-=val;
        }
        for(int i=1;i<n;++i)arr[i]+=arr[i-1];
        scanf("%d",&q);
        for(int i=0;i<q;++i)
        {
            int w;scanf("%d",&w);
            printf("%d\n",arr[w]);
        }
    }
    return 0;
}
