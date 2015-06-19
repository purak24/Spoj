#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while (scanf("%d %d", &a,&b) != EOF && !(a==0 && b==0))
    {
        int attack[a];
        int defend[b];
        for(int i=0;i<a;++i)scanf("%d",&attack[i]);
        for(int j=0;j<b;++j)scanf("%d",&defend[j]);
        sort(attack,attack+a);
        sort(defend,defend+b);
        if(!(attack[0]<defend[1]))printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
