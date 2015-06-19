#include<bits/stdc++.h>
using namespace std;
struct s
{
    int x,y;
};
bool acompare(s lhs,s rhs){if(lhs.y == rhs.y)return lhs.x < rhs.x;return lhs.y < rhs.y;}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        s   arr[n];
        for(int i=0;i<n;++i)
            scanf("%d %d",&arr[i].x,&arr[i].y);
        sort(arr,arr+n,acompare);
        int count =0,end=-1;
        for(int i=0;i<n;++i)
        {
            if(arr[i].x>=end)
            {
                count++;
                end = arr[i].y;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
