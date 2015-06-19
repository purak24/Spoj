#include<bits/stdc++.h>
using namespace std;
int e[16000001],f[16000001];
int binSearch(int key,int left ,int right)
{
    int mid,size=0,temp=0,itr=right;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(f[mid]==key)
        {
            temp=mid-1;
            while(mid<itr && f[mid]==key)
            {
                size++;
                mid++;
            }
            while(temp>=0 && f[temp]==key)
            {
                size++;
                temp--;
            }
            return size;
        }
        else if(f[mid]>key)
        right=mid-1;
        else
        left=mid+1;
    }
    return 0;
}
int main()
{
    int a[4001],b[4001],c[4001],d[4001];
    int n,q=0,size2;
    long long int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            e[q++]=a[i]+b[j];
    q=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            f[q++]=(-1)*(c[i]+d[j]);
    sort(e,e+(n*n));
    sort(f,f+(n*n));
    int i=0;
    while(i < n*n)
    {
        int value = e[i],size1=0;
        while(e[i]==value && i <n*n){size1++;i++;}
        size2=binSearch(value,0,n*n);
        //cout<<size1<<" "<<size2<<endl;
        count+= size1*size2;
    }
    printf("%lld",count);
    return 0;
}
