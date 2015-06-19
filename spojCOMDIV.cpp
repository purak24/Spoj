#include<bits/stdc++.h>
using namespace std;
int check[32000];
int prime[10000];
void sieve()
{
    for(int i=3;i<=180;i+=2)
        if(!check[i])
        {
            for(int j=i*i;j<=32000;j+=i)
                check[j]=1;
        }
    prime[0] = 2;
    int j=1;
    for(int i=3;i<=32000;i+=2)
        if(!check[i])
            prime[j++]=i;
}
int hcf(int a,int b)
{
    return a%b == 0 ? b : hcf(b,a%b);
}
int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,total=1,i,j,k,count=0;
        scanf("%d %d",&a,&b);
        if(b>a)swap(a,b);
        int temp = hcf(a,b);
        //cout<<temp<<endl;
        total=1;
        k=0;
        for(j=prime[k];j*j<=temp;j=prime[++k])
        {
            count=0;
            while(temp%j==0)
            {
                count++;
                temp/=j;
            }
            total *= count+1;
        }
        if(temp!=1)total*=2;
        printf("%d\n",total);
    }
    return 0;
}
