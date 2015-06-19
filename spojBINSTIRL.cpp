//property of stirling numbers
#include<bits/stdc++.h>
using namespace std;
/*int rec(int n,int m)
{
    if(n==0 && m==0)return 1;
    if(m==0 || n==0)return 0;
    return m*rec(n-1,m)+rec(n-1,m-1);
}*/
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n,m;
       scanf("%d %d",&n,&m);
       //printf("%d\n",rec(n,m)%2);
       if((n-m)&(m-1)/2)
        printf("0\n");
       else printf("1\n");
    }
    return 0;
}
