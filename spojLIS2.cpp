#include<bits/stdc++.h>
using namespace std;
struct p{int x,y;};
int binarySearch(p arr[],int l,int r,p key)
{
    int m;
    while(r-l>1)
    {
        m = l + (r-l)/2;
        ((key.x < arr[m].x && key.y < arr[m].y)?l:r)=m;
    }
    return r;
}
int LargestIncreasingSubsequence(p arr[],int n)
{
    p ans[n];
    int len = 1;
    ans[0] = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i].x < ans[0].x && arr[i].y < ans[0].y)ans[0]=arr[i];
        else if(ans[len-1].x < arr[i].x && ans[len-1].y < arr[i].y)ans[len++]=arr[i];
        else
        {
            int temp = binarySearch(ans,0,len-1,arr[i]);
            if(temp!=0)
            {
                if(arr[i].x <= ans[temp].x && arr[i].y <= ans[temp].y && arr[i].x > ans[temp-1].x && arr[i].y > ans[temp-1].y)ans[temp]=arr[i];
            }
            else if(arr[i].x <= ans[temp].x && arr[i].y <= ans[temp].y)ans[temp]=arr[i];
        }
    }
    return len;
}
int main()
{
    int n;
    scanf("%d",&n);
    p arr[n];
    for(int i=0;i<n;++i)scanf("%d %d",&arr[i].x,&arr[i].y);
    printf("%d\n",LargestIncreasingSubsequence(arr,n));
    return 0;
}
/*

This implementation of DP is log(n^2). Its giving TLE. We need nlogn implementation

#include<bits/stdc++.h>
using namespace std;
struct p{int first,second;};
int main()
{
    int n,big=0;
    scanf("%d",&n);
    int b[n];
    p arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i].first,&arr[i].second);
        b[i]=1;
    }
    for(int i=1;i<n;++i)
        for(int j=0;j<i;++j)
            if(arr[i].first>arr[j].first && arr[i].second>arr[j].second)
                {
                        b[i] = b[i]>b[j]+1?b[i]:b[j]+1;
                        if(b[i]>big)big = b[i];
                }
    printf("%d",big);
    return 0;
}*/
