#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,c=1;
        scanf("%d",&s);
        int arr[s+1];
        for(int i=1;i<=s;++i){scanf("%d",&arr[i]);c = c xor arr[i];}
        if(c)printf("Hanks Wins\n");
        else printf("Tom Wins\n");
    }
    return 0;
}
