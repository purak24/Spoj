//maths
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   double arr[100001];
   arr[1]=1;
   for(int i=2;i<=100000;i++)
        arr[i]=arr[i-1]+1.0/i;
   while(t--)
   {
       int n;
       scanf("%d",&n);
       printf("%.6lf\n",arr[n]);
   }
   return 0;
}
