#include<bits/stdc++.h>
#define M 1 //masculine
#define F (-1) //feminine
#define U 0//angad :p
using namespace std;
vector<int> adj[21000];
short int g[21000]; //gender
bool DFS(int r)
{
    bool res = true;
    for(int i=0; i < adj[r].size();++i)
        {
            int v = adj[r][i];
            if(g[v] == g[r])return false;
            if(g[v] == U)
            {
                g[v] = -g[r];
                res = res and DFS(v);
            }
        }
    return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1;i <= t; i++ )
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;++i)
        {
            g[i] = U ;
            adj[i].clear();
        }
        int x,y;
        for(int i=0;i<m;i++)
        {
            scanf("%d %d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        printf("Scenario #%d:\n",i);
        bool result = true;
        for(int i=0;i < n; i++)
        {
            if(g[i]==U)
            {
                g[i] = M;
                result = result and DFS(i);
            }
        }
        if(result)printf("No suspicious bugs found!\n");
        else printf("Suspicious bugs found!\n");
    }
    return 0;
}
