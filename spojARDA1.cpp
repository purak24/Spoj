#include<bits/stdc++.h>
using namespace std;
vector< pair <int,int> > v;
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    char n[n1][n2+1];
    for(int i=0;i<n1;++i)
        scanf("%s",&n[i]);
    /*for(int i=0;i<n1;++i)
    {
        for(int j=0;j<n2;++j)
            cout<<n[i][j]<<" ";
        cout<<endl;
    }*/
    int m1,m2;
    scanf("%d %d",&m1,&m2);
    char m[m1][m2+1];
    for(int i=0;i<m1;++i)
        scanf("%s",&m[i]);
    int check,x,y,X,Y;
    for(int i=0;i<=m1-n1;++i)
    {
        for(int j=0;j<=m2-n2;++j)
        {
            if(m[i][j]==n[0][0])
            {
                for(check=1,x=0,X=i;x<n1;x++,X++)
                {
                    for(y=0,Y=j;y<n2;y++,Y++)
                    {
                        if(n[x][y]!=m[X][Y])
                        {
                            check=0;
                            break;
                        }
                    }
                }
                if(check)v.push_back(make_pair(i+1,j+1));
            }
        }
    }
    if(v.empty())printf("NO MATCH FOUND...\n");
    else
    {
        sort(v.begin(),v.end());
        check = v.end() - v.begin();
        for(int i=0;i<check;i++)
            printf("(%d,%d)\n",v[i].first,v[i].second);
    }
    return 0;
}
