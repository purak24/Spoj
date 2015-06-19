#include <bits/stdc++.h>

using namespace std;

struct point
{
    int x,y,d;
};
int main()
{
    int t;
    scanf("%d",&t);
    char ts[100];
    int xco[4]= {0,1,-1,0};
    int yco[4]= {1,0,0,-1};
    while (t--)
    {
        char mat[106][106];
        int vis[106][106]= {{0}};
        int a,b;
        scanf("%d %d",&a,&b);
        point start,dest;
        for(int i=0; i<a; i++)
        {
            scanf("%s",ts);
            for(int j=0; j<b; j++)
            {
                mat[i][j]=ts[j];
                if (mat[i][j]=='$')
                {
                    vis[i][j]=1;
                    start.x=i,start.y=j,start.d=0;
                }
                if (mat[i][j]=='#')
                    dest.x=i,dest.y=j;
            }
        }
        queue<point> q;
        q.push(start);
        int f=0;
        while (!q.empty())
        {
            point temp=q.front();
            vis[temp.x][temp.y]=1;
            if (temp.x==dest.x && temp.y==dest.y)
            {
                printf("%d\n",temp.d);
                f=1;
                break;
            }
            q.pop();
            for(int i=0; i<4; i++)
            {
                int tx=temp.x+xco[i];
                int ty=temp.y+yco[i];
                if (tx>=0 && tx<a && ty>=0 && ty<b && mat[tx][ty]!='*' && !vis[tx][ty])
                {
                    point s;
                    s.x=tx,s.y=ty,s.d=temp.d+1;
                    q.push(s);
                }
            }
        }
        if (!f)printf("-1\n");
    }
    return 0;
}
