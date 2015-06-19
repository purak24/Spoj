#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int nm,gm,r=0,g=0;
		cin>>nm>>gm;
		int a[nm],b[gm];
		for(int i=0;i<nm;i++)cin>>a[i];
		for(int i=0;i<gm;i++)cin>>b[i];
		sort(a,a+nm);
		sort(b,b+gm);
		while(r!=nm && g!=gm)
		{
			if(a[r]>=b[g])g++;
			else r++;
		}
		if(r==nm)cout<<"MechaGodzilla\n";
		else cout<<"Godzilla\n";
	}
	return 0;
}
