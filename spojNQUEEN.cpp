//copied solution...do it yourself
#include<bits/stdc++.h>
using namespace std;
int n, npos, flag=1;
int orig[51],sol[51],pos[51],tmp[51],sol2[51];
int check_valid(int p)
{
    int sp = sol[p];
    for (int i=0; i<n; i++)
    {
        int si = sol[i];
        if (si == 0 || i == p)
            continue;
        if (si == sp)
            return 0;
        int diff = i - p;
        if (si - diff == sp)
            return 0;
        if (si + diff == sp)
            return 0;
    }
    return 1;
}
void print_solution(int sol1[])
{
    printf("%d",sol1[0]);
    for (int i=1; i<n; i++)
         printf(" %d",sol1[i]);
    printf("\n");
}
int position_next(int p)
{
    for (;;)
    {
        if (p == n)
        {
            print_solution(sol);
            return 1;
        }
        if (!orig[p])
            break;
        p++;
    }
    npos--;
    for (int i=0; i<=npos; i++)
    {
        sol[p] = pos[i];
        pos[i] = pos[npos];
        if (check_valid(p))
            if (position_next(p+1))
                return 1;
        pos[i] = sol[p];
    }
    npos++;
    sol[p] = 0;
    return 0;
}
int main()
{
    while (scanf("%d",&n))
    {
        for (int i=1; i<=n; i++)
            tmp[i] = 1;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&orig[i]);
            sol[i] = orig[i];
            tmp[sol[i]] = 0;
        }


            for(int i=1;i<=n/2;++i)
                {
                    if(n%2==0)
                    {
                        if((n-2) % 6 !=0)
                        {
                            sol2[i-1] = 2*i;
                            sol2[n/2 + i-1] = 2*i - 1;
                        }
                        else if( n%6 !=0 )
                        {
                            sol2[i-1] = 1+ (2*i + n/2 - 3%n);
                            sol2[n/2 + i-1] = n-(2*i +n/2 - 3%n);
                        }
                    }
                    else
                    {
                        sol2[i-1] = 2*i;
                        sol2[(n-1)/2 + i-1] = 2*i - 1;
                        sol2[n-1] = n;
                    }
                 }
                for(int i=0;i<n;++i)
                    if(orig[i]!=0)
                        if(orig[i]!=sol2[i])flag=0;

      if(flag)print_solution(sol2);
        else{npos = 0;
        for (int i=1; i<=n; i++)
            if (tmp[i] == 1)
               pos[npos++] = i;
        position_next(0);}
    }
    return 0;
}





