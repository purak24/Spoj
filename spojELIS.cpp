#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],b[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);b[i]=1;}
    for(int i=1;i<n;++i)
        for(int j=0;j<i;++j)
            if(arr[i]>arr[j])
                b[i] = max(b[i],b[j]+1);
    sort(b,b+n);
    printf("%d",b[n-1]);
    return 0;
}
