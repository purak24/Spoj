#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a=0,b=0,temp,flag=0;
        for(int i=0;i<n;i++)
            {scanf("%d",&temp);
            if(temp ==a || a==0)a=temp;
            else if(temp==b || b==0)b=temp;
            else flag=1;}
        if(flag)printf("-1\n");
        else if(b==0)printf("%d\n",a+1);
        else
        {
            if(a<b)swap(a,b);
            printf("%d\n",a);
        }
    }
    return 0;
}
