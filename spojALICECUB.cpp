#include<bits/stdc++.h>
using namespace std;
int edges[][2]= { {0,2}, {0,1}, {0,4}, {0,8}, {1,5}, {1,3}, {1,9},
    { 2,3},{2,10}, {2,6},{3,11},{3,7},{4,5},{4,6},
    {4,12},{5,7},{5,13},{6,7},{6,14},{7,15},{8,9},
    {8,12},{8,10},{9,11},{9,13},{10,11},
    {10,14},{11,15},{12,13},{12,14},{13,15},{14,15}
};
int nedge= 32;
map< vector<int>,int > stp;
int main()
{
    vector<int>v;
    for(int i=0; i<8; ++i)
        v.push_back(0);
    for(int i=0; i<8; ++i)
        v.push_back(1);
    stp[v]=0;
    queue< vector<int> > q;
    q.push(v);
    while(!q.empty())
    {
        vector<int> vx = q.front();
        q.pop();
        int st = stp[vx];
        for(int i=0; i<nedge; ++i)
        {
            int v = edges[i][0];
            int u = edges[i][1];
            if(vx[v]+vx[u]==1)
            {
                swap(vx[u],vx[v]);
                if(stp.find(vx)==stp.end())
                {
                    stp[vx]=st+1;
                    if(st+1<=2)q.push(vx);
                }
                swap(vx[u],vx[v]);
            }
        }
    }
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; ++i)
    {
        vector<int>  qv;
        for(int j=0; j<16; ++j)
        {
            int n;
            scanf("%d",&n);
            qv.push_back(n);
        }
        if(stp.find(qv)!=stp.end())
            cout<<"Case #"<<i<<": "<<stp[qv]<<endl;
        else
            cout<<"Case #"<<i<<": "<<"more"<<endl;
    }
    return 0;
}
