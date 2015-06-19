#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,d,c=0;
		cin>>n>>m>>d;
		int a[n];
		for(int i=0;i<n;++i)
			{
				cin>>a[i];
				a[i]-=1;
				c+=a[i]/d;
			}
		if(c>=m)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
