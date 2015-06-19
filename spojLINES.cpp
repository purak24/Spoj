#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,x[200],y[200];
        while(true)
        {
            cin>>n;
            if(!n)break;
            for(int i=0;i<n;++i)scanf("%d %d",&x[i],&y[i]);
            map < pair<int,int> , int>  m;
            for(int i=0;i<n-1;++i)
                for(int j=i+1;j<n;++j)
                    {
                        int dx = x[i]-x[j],dy = y[i]-y[j];
                        int g = __gcd(dx,dy);
                        dx/=g;dy/=g;
                        if(dx<0){dx=-dx;dy=-dy;}
                        m[make_pair(dx,dy)]++;
                    }
            printf("%d\n",(int)m.size());
        }
        return 0;
}
