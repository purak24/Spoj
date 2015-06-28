#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==1)printf("poor conductor\n");
        else
        {
            int row;
            if((n-1)%5==0)row=((n-1)/5);
            else row = ((n-1)/5)+1;
            char direction,seat;
            if(row%2!=0)
            {
                if((n-1)%5==1 || (n-1)%5== 0 )seat='W';
                else if((n-1)%5==2 ||(n-1)%5== 3 ) seat='A';
                else seat='M';
                if((n-1)%5==1 || (n-1)%5==2) direction='L';
                else direction='R';
            }
            else
            {
                if((n-1)%5==1 || (n-1)%5== 0 ) seat='W';
                else if((n-1)%5==4 ||(n-1)%5== 3 ) seat='A';
                else seat='M';
                if((n-1)%5==0 || (n-1)%5==4) direction='L';
                else direction='R';
            }
            printf("%d %c %c\n",row,seat,direction);
        }
    }
    return 0;
}
