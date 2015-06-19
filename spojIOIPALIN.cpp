/*
algo -> longest common subsequence
refer -> http://www.geeksforgeeks.org/dynamic-programming-set-28-minimum-insertions-to-form-a-palindrome/
*/
#include<bits/stdc++.h>
using namespace std;
int lcs( char *X, char *Y, int n)
{

    int i, j;
    int  L[n+1];
    memset(L , 0 , sizeof(L));
    /* Following steps build L[m+1][n+1] in bottom up fashion. Note
       that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
    for (i=1; i<=n; i++)
    {
        int prevElemAtJIndex = L[0];
        for (j=1; j<=n; j++)
        {

            /*if (i == 0 || j == 0)
                L[i][j] = 0;*/
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

    /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
    return L[n];
}

// LCS based function to find minimum number of insersions
int findMinInsertionsLCS(char str[], int n)
{
    // Creata another string to store reverse of 'str'
    char rev[n+1];
    int j=0;
    for(int i=n-1;i>=0;--i)rev[j++]=str[i];
    rev[j] = '\0' ;

    // The output is length of string minus length of lcs of
    // str and it reverse
    return (n - lcs(str, rev, n));
}
int main()
{
    int t;
    scanf("%d",&t);
    char str[t+1];
    scanf("%s",&str);
    printf("%d\n",findMinInsertionsLCS(str,strlen(str)));

}
