#include<bits/stdc++.h>
using namespace std;
int table[1001][1001] ={0};
int dp(int arr[],int n)
{
//    int table[n][n] = {0};
    //for(int i=0;i<n;++i)for(int j=0;j<n;++j)table[i][j]=0;
    for(int gap = 0;gap<n;++gap)
        for(int i=0,j=gap;j<n;++i,++j)
        {
            int x,y;
            /*
            int x = ((i+2) <= j) ? table[i+2][j] : 0;
            int y = ((i+1) <= (j-1)) ? table[i+1][j-1] : 0;
            int z = (i <= (j-2))? table[i][j-2]: 0;
            table[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z));
            */
            if(i+1 <= j)
                x  = (arr[i+1]>=arr[j]) ? table[i+2][j]:table[i+1][j-1];
            else x=0;
            if(i<=j-1)
                y = (arr[i]>=arr[j-1]) ? table[i+1][j-1]:table[i][j-2];
            else y=0;
            table[i][j] = max(arr[i]+x ,arr[j]+y);
        }
    return table[0][n-1];
}
int main()
{
    int n,c=1;
    scanf("%d",&n);
    while(n!=0)
    {
        int arr[n],sum=0;
        for(int i=0;i<n;++i)
            {
                scanf("%d",&arr[i]);
                sum+=arr[i];
            }
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n"
               ,c++,2*dp(arr,n)-sum);
        scanf("%d",&n);
    }
    return 0;
}
