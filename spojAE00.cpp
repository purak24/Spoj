#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	
    int n,i,ans=0;
    cin>>n;
    for(i=1;i<=((int)sqrt(n));i++)
        ans+=(n/i-i+1);
    cout<<ans;
    return 0;
}
