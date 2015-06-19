/*#include<bits/stdc++.h>
using namespace std;
int lcs( char *X, char *Y, int m , int n)
{

    int i, j;
    int  L[n+1];
    memset(L , 0 , sizeof(L));
    // Following steps build L[m+1][n+1] in bottom up fashion. Note
      // that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1]
    for (i=1; i<=m; i++)
    {
        int prevElemAtJIndex = L[0];
        for (j=1; j<=n; j++)
        {

            //if (i == 0 || j == 0)
              //  L[i][j] = 0;
            int temp = L[j];
            if (X[i-1] == Y[j-1])
                //L[i][j] = L[i-1][j-1] + 1;
                L[j] = 1 + prevElemAtJIndex;
            else
                //L[i][j] = max(L[i-1][j], L[i][j-1]);
                L[j] = max(L[j-1],L[j]);
            prevElemAtJIndex = temp;
        }
    }

    //L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1]
    return L[n];
}

int main()
{
    char a[50001],b[50001];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("%d\n",lcs(a,b,strlen(a),strlen(b)));
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[50001],b[50001];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("%d\n",lcs(a,b,strlen(a),strlen(b)));
    return 0;
}

