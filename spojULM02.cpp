#include<bits/stdc++.h>
#define MAX 2048
using namespace std;
char M[MAX][MAX];
void solve(int n, int v, int h)
{
    if (n == 1)
    {
        M[v][h] = '/';
        M[v - 1][h + 1] = '/';
        M[v - 1][h + 2] = '\\';
        M[v][h + 1] = '_';
        M[v][h + 2] = '_';
        M[v][h + 3] = '\\';
    }
    else
    {
        int a = 1<<(n-1);
        solve(n - 1, v, h);
        solve(n - 1, v - a, h + a);
        solve(n - 1, v, h + (1 << n));
    }
}
int main()
{
    int n;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            M[i][j] = ' ';
    while (scanf("%d", &n) != EOF && n != 0)
    {
        int a = 1 << n+1 ;
        int b = 1 << n;
        for (int i = 0; i < a; i++)
            for (int j = 0; j < a; j++)
                M[i][j] = ' ';
        solve(n, b-1, 0);
        for (int i = 0; i < b ; i++)
        {
            for (int j = 0; j < a; j++)
                printf("%c",M[i][j]);
            printf("\n");
        }
    }
    return 0;
}
