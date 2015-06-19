#include <bits/stdc++.h>
using namespace std;
vector < pair<int,int> > arr;
pair <int,int> temp;
int main()
{
    int t,j,p;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;++i)
        {
            scanf("%d", &arr[i].first);
        }
        for(int i=0;i<n;++i)
        {
            scanf("%d", &arr[i].second);
        }
        sort(arr.begin(),arr.end());
        for(int i=n-2; i>=0 ; --i)
        {
            temp = arr[i];
            for(j = i,p = 0 ; p < temp.second ; ++p,++j)
            {
                arr[j] = arr[j+1];
            }
            arr[j] = temp;
        }
        for(int i=0;i<n;++i)
        {
            printf("%d", &arr[i].first);
        }
    }
    return 0;
}
