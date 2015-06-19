#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,sum;
		cin>>a>>b>>sum;
		ll n=(2*sum)/(a+b);
		cout<<n<<endl;
		ll d=(b-a)/(n-5);
		ll ft=a-2*d;
		for(ll i=0;i<n;++i)
		{
			cout<<ft+i*d<<" ";
		}
		cout<<endl;
	}
	return 0;
}
