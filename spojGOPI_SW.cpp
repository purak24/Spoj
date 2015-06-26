//Egyptian Fractions
//1/a = 1/(a+1)+1/(a*(a+1))
#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
long long int arr[1000003];
void sieve()
{
    arr[2]=2;
    arr[3]=6;
    for(int i=4;i<=1000000;i++)
        arr[i]=(arr[i-1]*(arr[i-1]+1))%M;
}
int main()
{
    int t;
    scanf("%d",&t);
    sieve();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",arr[n]%M);
    }
    return 0;
}
