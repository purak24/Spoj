#include<bits/stdc++.h>
using namespace std;
int GetMinIntMore(int x,int y,int z)
{
    if(y<x)x=y;
    if(z<x)x=z;
    return x;
}
int LevenshteinDistance(string s, string t)
{
    int edit = 0;
    int lens = s.length();
    int lent = t.length();
    //int distance[lens][lent];
    map < pair<int,int> , int > distance;
    //for(int i =0 ; i<=lens ; ++i)distance[i][0]=i;
    //for(int i =0 ; i<=lent ; ++i)distance[0][i]=i;
    for(int i =0 ; i<=lens ; ++i)distance[make_pair(i,0)]=i;
    for(int i =0 ; i<=lent ; ++i)distance[make_pair(0,i)]=i;
    int i,j;
    for(i=0; i<lens; ++i)
    {
        for(j=0; j<lent; ++j)
        {
            edit = 1;
            if(s[i]==t[j])edit=0;
            /*distance[i+1][j+1] = GetMinIntMore(distance[i][j+1]+1,
                                               distance[i+1][j]+1,distance[i][j]+edit);*/
            distance[make_pair(i+1,j+1)] = GetMinIntMore(distance[make_pair(i,j+1)]+1,distance[make_pair(i+1,j)]+1,distance[make_pair(i,j)]+edit);
        }
    }
    //return distance[lens][lent];
    return distance[make_pair(lens,lent)];
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char c;
        string a,b;
        cin>>a;
        scanf("%c",&c);
        cin>>b;
        printf("%d",LevenshteinDistance(a,b));
    }
    return 0;
}
//TLE with this code
//Commented code was giving SIGSEV but just changing string to char arrays will do.
