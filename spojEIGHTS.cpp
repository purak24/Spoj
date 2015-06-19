#include<iostream>
using namespace std;
typedef unsigned long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll k;
		cin>>k;
		cout<<(192+(k-1)*250)<<endl;
	}
	return 0;
}
