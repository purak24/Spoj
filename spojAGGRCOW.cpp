//AWESOMEEE CONCEPT!!!
//algo = binary search
#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int x,int n,int c)
{
    int cowsPlaced = 1;
    long long int lastPos = arr[0];
    for(int i=1;i<n;++i)
    {
        if(arr[i]-lastPos>=x)
        {
            cowsPlaced++;
            if(cowsPlaced==c)return 1;
            lastPos=arr[i];
        }
    }
    return 0;
}
int binSearch(int arr[],int n,int c)
{
    int start=0,end=arr[n-1];
    while(start<end)
    {
        int mid = (start+end)/2;
        if(f(arr,mid,n,c)==1)
            start=mid+1;
        else
            end=mid;
    }
    return start-1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c;
        scanf("%d %d",&n,&c);
        int arr[n];
        for(int i=0;i<n;++i)scanf("%d",&arr[i]);
        sort(arr,arr+n);
        printf("%d\n",binSearch(arr,n,c));
    }
    return 0;
}
