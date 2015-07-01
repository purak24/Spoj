//Rabin-Karp Fingerprint Algorithm
#include<bits/stdc++.h>
#define d 256 // number of characters in the input alphabet
using namespace std;
int k;
void search(string pat,string txt, int q,int arr[])
{

    int M = pat.length();
    int N = txt.length();
    int i,j,p=0,t=0,h=1;
    for(i=0;i<M-1;++i)
        h=(h*d)%q;
    for(i=0;i<M;i++)
    {
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }
    for(i=0;i<=N-M;i++)
    {
        if(p==t)
        {
            for(j=0;j<M;++j)
            {
                if(txt[i+j]!=pat[j])
                    break;
            }
            if(j==M)
            {
                arr[k++]=i;
            }
        }
        if(i<N-M)
        {
            t=(d*(t-txt[i]*h)+txt[i+M])%q;
            if(t<0)t=(t+q);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[1000000]={-1};
        k=0;
        string a,b;
        cin>>a>>b;
        search(b,a,101,arr);
        if(k)
        {
            printf("%d\n",k);
            for(int i=0;i<k;++i)
                printf("%d ",(arr[i]+1));
        }
        else
        {
            printf("Not Found\n");
        }
        printf("\n");
    }
    return 0;
}
