/*
longest bitonic subsequence
refer -> http://www.geeksforgeeks.org/dynamic-programming-set-15-longest-bitonic-subsequence/
*/
#include<bits/stdc++.h>
using namespace std;
int bitonicSequence(int a[],int n)
{
    int i,j;
    int lis[n],lds[n];
    for(i=0;i<n;i++)
        lis[i]=lds[i]=1;
    for(i=1;i<n;i++)
        for(j=0;j<i;++j)
            if(a[i]>a[j] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
    for(i=n-2;i>=0;i--)
        for(j=n-1;j>i;j--)
            if(a[i]>a[j] && lds[i]<lds[j]+1)
                lds[i] = lds[j] + 1;
    int max = lis[0]+lds[0]-1;
    for(i=1;i<n;i++)
        if(lis[i]+lds[i]-1>max)
            max=lis[i]+lds[i]-1;
    return max;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        printf("%d\n",bitonicSequence(a,n));
    }
    return 0;
}
