#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char ans[100000]; // store lcs
void lcs_length(char a[], char b[])
{
    int n;
    int m;
    n=strlen(a);
    m=strlen(b);
    int c[1000][1000];
    char v[1000][1000];
    for(int i=0; i<=n; i++)
    {
        c[i][0]=0;
    }
    for(int i=0; i<=m; i++)
    {
        c[0][i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i-1]==b[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                v[i][j]='`';
            }
            else
            {
                if(c[i-1][j]>=c[i][j-1])
                {
                    c[i][j]=c[i-1][j];
                    v[i][j]='|';
                }
                else
                {
                    c[i][j]=c[i][j-1];
                    v[i][j]='-';
                }
            }
        }
    }
    int i=n,j=m;
    int k=0;
    while (1)
    {
        if(i==0 || j==0)
        {
            break;
        }
        else if(v[i][j]=='`')
        {
            i=i-1;
            j=j-1;
            ans[k++]=a[i];
        }
        else if(v[i][j]=='|')
        {
            i=i-1;
            j=j;
        }
        else if(v[i][j]=='-')
        {
            i=i;
            j=j-1;
        }

    }

    int l=0;
    int p=0;
    char store[10000]; // stores the output string
    i=n-1;
    j=m-1;
    while(j>=0 || i>=0)
    {
        if(l<k)
        {
            while(j>=0 && b[j]!=ans[l])
            {
                store[p++]=b[j];
                j--;
            }
            while(i>=0 && a[i]!=ans[l])
            {
                store[p++]=a[i];
                i--;
            }
            store[p++]=ans[l];
            l++;
            i--;
            j--;
        }
        else
        {
            while(j>=0)
            {
                store[p++]=b[j];
                j--;
            }
            while(i>=0)
            {
                store[p++]=a[i];
                i--;
            }
        }
    }
    for(int i=p-1; i>=0; i--)
    {
        cout<<store[i];
    }
    cout<<endl;
}
int main()
{

    char a[1000],b[1000];
    while(scanf("%s",a)!=EOF && scanf("%s",b)!=EOF )
    {
        lcs_length(a,b);
    }
    return 0;
}
/*

//algo -> shortest common supersequence
//refer -> http://www.geeksforgeeks.org/printing-longest-common-subsequence/

#include<bits/stdc++.h>
using namespace std;
void scs( char *X, char *Y, int m, int n )
{
    int L[m+1][n+1];

    //Following steps build L[m+1][n+1] in bottom up fashion. Note
      // that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1]
for (int i=0; i<=m; i++)
{
    for (int j=0; j<=n; j++)
    {

        if (i == 0 )L[i][j] = j;
        else if (j == 0 )L[i][j] = i;
        else if (X[i-1] == Y[j-1])
            L[i][j] = L[i-1][j-1] + 1;
        else
            L[i][j] = 1+min(L[i-1][j], L[i][j-1]);
    }
}

// Following code is used to print LCS
int index = L[m][n];

// Create a character array to store the lcs string
char lcs[index+1];
lcs[index] = '\0'; // Set the terminating character

// Start from the right-most-bottom-most corner and
// one by one store characters in lcs[]
int i = m, j = n;
while (i > 0 && j > 0)
{
    // If current character in X[] and Y are same, then
    // current character is part of LCS

    if (X[i-1] == Y[j-1])
    {
        lcs[index-1] = X[i-1]; // Put current character in result
        i--;
        j--;     // reduce values of i, j and index
    }

    // If not same, then find the larger of two and
    // go in the direction of larger value
    else if (L[i-1][j] < L[i][j-1])
    {
        lcs[index-1] = X[i-1];
        i--;
    }
    else
    {
        lcs[index-1] = Y[j-1];
        j--;
    }

    index--;
}
if(i==0)while(j>=0)lcs[index--]=Y[j--];
else if(j==0)while(i>=0)lcs[index--]=X[i--];
printf("%s\n",lcs);
}
int main()
{
    char s1[100],s2[100];
    while(scanf("%s %s",&s1,&s2))
    {
        int m = strlen(s1);
        int n = strlen(s2);
        scs(s1,s2,m,n);
    }
    return 0;
}
*/
