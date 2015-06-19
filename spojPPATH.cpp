#include <bits/stdc++.h>
using namespace std;
bool check[10009];
void sieve()
{
    for(int i=2;i<=100;++i)
    {
        if(!check[i])
        {
            for(int j=i*i;j<10000;j+=i)
                check[j] = true;
        }
    }
}
int toNum(int a[])
{
    int temp=0,k=0;
    while(k<4)
    {
        temp = temp*10 + a[k];
        k++;
    }
    return temp;
}
int toArr(int arr[],int num)
{
    int w = 3;
    while(num)
    {
        arr[w--] = num%10;
        num/=10;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    sieve();
    while(t--)
    {
        int prime[4],a,b,dist[10000];
        memset(dist,-1,sizeof(dist));
        scanf("%d %d",&a,&b);
        queue <int> q;
        dist[a] = 0;
        q.push(a);
        while(!q.empty())
        {
            int num = q.front();
            for(int k =3; k>=0 ; --k)
            {
                toArr(prime,num);
                for(int i=0;i<=9;++i)
                {
                    prime[k] = i;
                    int temp = toNum(prime);
                    if((!check[temp]) && dist[temp]==-1 && temp>=1000)
                    {
                        dist[temp] = dist[num] + 1;
                        q.push(temp);
                    }
                }
            }
            q.pop();
        }
        dist[b] == -1 ? printf("Impossible\n") : printf("%d\n",dist[b]);
    }
    return 0;
}
