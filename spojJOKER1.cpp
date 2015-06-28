#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,flag=0;
        ll ans=1;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;++i)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=n-1;i>=0;--i)
            {
                arr[i]-=i;
                if(arr[i]<1){flag=1;}
                ans= (ans*arr[i])%M;
            }
        if(flag)printf("0\n");
        else printf("%lld\n",ans);
    }
    printf("KILL BATMAN\n");
}
