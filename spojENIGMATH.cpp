#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
    return a%b==0 ? b:hcf(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int c = hcf(a,b);
        printf("%d %d\n",b/c,a/c);
    }
}
