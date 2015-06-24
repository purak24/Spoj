#include<bits/stdc++.h>
using namespace std;
int main()
{
    long r;
    scanf("%ld",&r);
    long arr[r],flag[r],count=0;
    for(int i=0;i<r;++i)
    {
        scanf("%ld",&arr[i]);
        flag[i]=0;
    }
    sort(arr,arr+r);
    for(int i=0;i<r;++i)
    {
        int k=1;
        if(flag[i]==0)
        {
            flag[i] = 1;
            count++;
            for(int j=i;j<r;++j)
            {
                if((arr[j]==(arr[i]+k*30))&&(flag[j]==0))
                {
                    flag[j] = 1;
                    ++k;
                }
                if(k>3)break;
            }
        }
    }
    printf("%ld",count);
    return 0;
}
