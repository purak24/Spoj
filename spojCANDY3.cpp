#include<iostream>
using namespace std;
typedef long long int lli;
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		lli n,sum=0;
		cin>>n;
		for(lli i=0;i<n;++i)
		{
			lli t;
			cin>>t;
			sum=(sum+t)%n;
		}
		if(sum)cout<<"NO\n";
		else cout<<"YES\n";
	}
    return 0;
}
