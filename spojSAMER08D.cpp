#include<bits/stdc++.h>
using namespace std;
template<class T> void checkmax(T &a,T &b){if(b>a)a=b;}
char a[1001],b[1001],c[1];
short dp[1001][1001][2];
short lmatch[1001][1001];
int main()
{
    while(true)
    {
        int k;
        scanf("%d",&k);
        if(!k)break;
        scanf
        cout<<a<<" "<<b<<endl;
        int l1=strlen(a),l2=strlen(b);
        for(int i=0;i<l1;i++)
            for(int j=0;j<l2;j++)
                lmatch[i+1][j+1]=(a[i]==b[j])?1+lmatch[i][j]:0;
        for(int i=0;i<l1;i++)
            for(int j=0;j<l2;++j)
            {
                dp[i+1][j+1][0]=dp[i+1][j+1][1]=max(dp[i][j+1][1],dp[i+1][j][1]);
                if(a[i]==b[j])
                {
                    short temp = 1+dp[i][j][0];
                    checkmax(dp[i+1][j+1][0],temp);
                    if(lmatch[i+1][j+1] >= k)
                    {
                        short temp2 = k+dp[i+1-k][j+1-k][0];
                        checkmax(dp[i+1][j+1][1],temp2);
                    }
                }
            }
            printf("%d\n",dp[l1][l2][1]);
    }
}
