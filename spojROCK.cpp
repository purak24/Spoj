#include<bits/stdc++.h>
using namespace std;
char s[201];
int best[201][201],memo[201][201];
int solve(int s, int e)
{
    if(s > e) return 0;
    if(memo[s][e] == -1)
    {
        memo[s][e] = 0;
        for(int i = s; i <= e; ++i)
        {
            int aux = best[s][i] + solve(i+1,e);
            if(aux > memo[s][e])memo[s][e] = aux;
        }
    }
    return memo[s][e];
}
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        for(int i=0;i<201;++i)
            for(int j=0;j<201;++j)
            {
                best[i][j]=0;
                memo[i][j]=-1;
            }
        scanf("%d",&N);
        scanf("%s",&s);
        for(int i = 0; i < N; ++i)
            for(int j = i; j < N; ++j)
                for(int k = j,diff = 0; k >= i; --k)
                {
                    if(s[k] == '1') ++diff;
                    else --diff;
                    if(diff > 0) best[i][j] = j-k+1;
                }
        printf("%d\n",solve(0,N-1));
    }
    return 0;
}
