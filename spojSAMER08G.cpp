#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        int arr[n],pos[n],newarr[n],flag=0;
        for(int i=0;i<n;i++)
        {
           scanf("%d %d",&arr[i],&pos[i]);
           newarr[i]=0;
        }
        for(int i=0;i<n;++i)
            if((i+pos[i])>=n || (i+pos[i])<0 || newarr[i+pos[i]]!=0)flag=1;
            else newarr[i+pos[i]]=arr[i];
        if(flag)printf("-1\n");
        else
        {
            for(int i=0;i<n;i++)
                printf("%d ",newarr[i]);
            printf("\n");
        }
    }
    return 0;
}
