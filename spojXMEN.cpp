#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int r,int key)
{
    int m;
    while(r-l>1)
    {
        m = l + (r-l)/2;
        (arr[m]>=key ? r : l) = m;
    }
    return r;
}
int LargestIncreasingSubsequence(int arr[],int n)
{
    int ans[n];
    int len = 1;
    ans[0] = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] < ans[0])ans[0]=arr[i];
        else if(arr[i]>ans[len-1])ans[len++] = arr[i];
        else ans[binarySearch(ans,-1,len-1,arr[i])] = arr[i];
    }
    return len;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int wolv[n],magn[n],temp[n];
        for(int i=0;i<n;++i)
        {
            scanf("%d",&magn[i]);
            temp[magn[i]] = i;
        }
        for(int i=0;i<n;++i)
        {
            scanf("%d",&wolv[i]);
            magn[i] = temp[wolv[i]];
        }
        printf("%d\n",LargestIncreasingSubsequence(magn,n));
    }
    return 0;
}
/*
This wont work because int L[N+1][N+1];
limit on N was 10^5 so you are using 10^5*10^5*8 bytes of memory.
that is roughly 80GB of memory . limit on memory was far less
correct solution was to convert LCS problem to LIS one by
relabeling the numbers in second list.
//Longest Common Subsequence
#include<bits/stdc++.h>
using namespace std;
void lcs(int magn[],int wolv[],int n)
{
    int dp[n+1][n+1];
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=n;++j)
        {
            if(i==0 || j==0)dp[i][j]=0;
            else if(magn[i-1]==wolv[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d\n",dp[n][n]);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int magn[n],wolv[n];
        for(int i=0;i<n;++i)scanf("%d",&magn[i]);
        for(int i=0;i<n;++i)scanf("%d",&wolv[i]);
        lcs(magn,wolv,n);
    }
    return 0;
}
*/
