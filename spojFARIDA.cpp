#include <bits/stdc++.h>
long long int max(long long int a, long long int b){return a>b?a:b;}
int main()
{
    int t;
    scanf("%d", &t);
    for(int j = 0; j < t; j++)
    {
        int n, i;
        scanf("%d", &n);
        if(!n){printf("Case %d: 0\n",j+1);continue;}
        long long int a[n], d[n];
        for(i = 0; i < n; i++)scanf("%lld", &a[i]);
        d[0] = a[0];
        d[1] = max(d[0], a[1]);
        for(i = 2; i < n; i++)d[i] = max(d[i-1], a[i] + d[i-2]);
        printf("Case %d: %lld\n", j+1, d[n-1]);
    }
    return 0;
}
