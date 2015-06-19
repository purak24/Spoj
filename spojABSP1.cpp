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
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        long long ans=0;
        for(int i=0;i<n/2;i++)
            ans+=(n-2*i-1)*(arr[n-i-1]-arr[i]);
        printf("%lld\n",ans);
    }
}
