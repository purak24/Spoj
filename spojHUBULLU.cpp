#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		if(t){if(p==0)cout<<"Airborne wins.\n";
		else cout<<"Pagfloyd wins.\n";}
		else {if(p==0)cout<<"Airborne wins.";
		else cout<<"Pagfloyd wins.";}
	}
	return 0;
}
