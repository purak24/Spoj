#include <bits/stdc++.h>
using namespace std;
char ts[1001];
int xco[4]= {0,1,-1,0};
int yco[4]= {1,0,0,-1};
char mat[1001][1001];
int a,b;
struct point
{
    int x,y,d;
}big;
void bfs(point start)
{
    int vis[1001][1001]= {{0}};
    queue<point> q;
    q.push(start);
    while (!q.empty())
    {
        point temp=q.front();
        vis[temp.x][temp.y]=1;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=temp.x+xco[i];
            int ty=temp.y+yco[i];

            if (tx>=0 && tx<b && ty>=0 && ty<a && mat[tx][ty]!='#' && !vis[tx][ty])
            {
                point s;
                s.x=tx;s.y=ty;s.d=temp.d+1;

                q.push(s);
             }
        }
        if(temp.d>big.d)big=temp;
     }

}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&a,&b);
        point start;
        big.d=0;big.x=0;big.y=0;
        memset(mat,'#',sizeof(mat[0][0]*(b+1)*(a+1)));
        for(int i=0; i<b; i++)
        {
            scanf("%s",ts);
            for(int j=0; j<a; j++)
                mat[i][j]=ts[j];
        }
        for(int i=0;i<b;i++)
            for(int j=0;j<a;j++)
                if (mat[i][j]=='.'){start.x=i,start.y=j,start.d=0;i=b;break;}
        bfs(start);
        big.d=0;
        bfs(big);
        cout<<"Maximum rope length is "<<big.d<<"."<<endl;
    }
    return 0;
}
