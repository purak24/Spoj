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
    char ts[183];
    int xco[4]= {-1,1,0,0};
    int yco[4]= {0,0,-1,1};
    while (t--)
    {
        queue<point> q;
        int mat[183][183],ans[183][183]= {{0}};
        int vis[183][183]= {{0}};
        int a,b;
        scanf("%d %d",&a,&b);
        point start;
        for(int i=0; i<a; i++)
        {
            scanf("%s",ts);
            for(int j=0; j<b; j++)
            {
                mat[i][j]=ts[j]-'0';
                if (mat[i][j]==1)
                {
                    vis[i][j]=1;
                    ans[i][j]=0;
                    start.x=i;
                    start.y=j,start.d=0;
                    q.push(start);
                }
            }
        }

        while (!q.empty())
        {
            point temp=q.front();

            q.pop();
            for(int i=0; i<4; i++)
            {
                int tx=temp.x+xco[i];
                int ty=temp.y+yco[i];
                if (tx>=0 && tx<a && ty>=0 && ty<b && !vis[tx][ty])
                {
                    vis[tx][ty]=1;
                    ans[tx][ty]=temp.d+1;
                    point s;
                    s.x=tx,s.y=ty,s.d=temp.d+1;
                    q.push(s);
                }
            }
        }
        for(int i=0; i<a; ++i)
            for(int j=0; j<b; ++j)
            {
                cout<<ans[i][j];
                if(j==b-1)cout<<endl ;
                else cout<<" ";
            }


    }
    return 0;
}
