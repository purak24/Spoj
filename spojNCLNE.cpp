#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=1;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
                sum-=arr[i];
                sum=sum<<1;
            }
        if(sum)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
