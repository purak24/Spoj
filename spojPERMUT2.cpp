#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{	int flag=1;
		int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		for(int i=0;i<n;++i)if((i+1)!=a[a[i]-1]){flag=0;break;}
		if(flag)cout<<"ambiguous\n";
		else cout<<"not ambiguous\n";
		cin>>n;
	}
	return 0;
}
