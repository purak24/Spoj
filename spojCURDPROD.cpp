#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll t,int n,int arr[])
{
    ll tot = 0;
    for(int i=0;i<n;i++)
        tot+=t/arr[i];
    return tot;
}
ll binSearch(int arr[],int n,ll prod,ll big)
{
    ll mid,low=1,high=big;
    while(low<high)
    {
        mid = (low+high)/2;
        ll temp = check(mid,n,arr);
        if(temp<prod)low=mid+1;
        else high=mid;
    }
    return high;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,T;
        ll big=-1;
        scanf("%d %d",&n,&T);
        int arr[n];
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>big)big=arr[i];
        }
        big*=T;
        printf("%lld\n",binSearch(arr,n,T,big));
    }
}

