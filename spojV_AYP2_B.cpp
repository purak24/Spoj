#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tempSum=0,maxSum=0;
    cin>>n>>m;
    int arr[n][n];
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin>>arr[i][j];
    for(int x=0,y=0,i=x+m-1,j=y+m-1;x<n-m+1,y<n-m+1,i<n,j<n;++x,++y,++i,++j)
        {
           for(int k=x;k<=i;++k)
                {
                   for(int l=y;l<=j;++l)
                      {
                          tempSum+=arr[k][l];
                      }
                }
                if(tempSum>maxSum)maxSum=tempSum;
                tempSum=0;
        }
    double s = maxSum/4.0;
    printf("%.2f", s);
    return 0;
}
