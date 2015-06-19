#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;string temp;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;++i)
        {
            cin>>temp;
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        long long int ans=0;
        for(int i=0;i<n;i++)
            ans+=abs(i+1-arr[i]);
        printf("%lld\n",ans);
    }
    return 0;
}
