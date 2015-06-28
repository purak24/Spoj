#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;++i)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0;i<n-1;++i)
            for(int j=i+1;j<n;++j)
                if(arr[j] > (arr[i]<<1))break;
                else if(arr[j]!=-1 && arr[j] == (arr[i]<<1))
                {
                    ++count;
                    arr[j]=-1;
                }
        printf("%d\n",count);
    }
    return 0;
}
