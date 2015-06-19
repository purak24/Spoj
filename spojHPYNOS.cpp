#include<bits/stdc++.h>
using namespace std;
map <int,int> mem;
int c=0;
int add(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=(n%10)*(n%10);
        n/=10;
    }
    return sum;
}
int happy(int n)
{
    if(n==1)return c;
    if(mem[n])return -1;
    else {c++;mem[n] = add(n);
    happy(mem[n]);}
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",happy(n));
    return 0;
}
