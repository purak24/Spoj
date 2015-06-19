#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
		int n;cin>>n;
		if(!n)break;
		int c=2,j=0;
		while(c<=n){c=c*2;++j;}
		cout<<j<<endl;		
	}
	return 0;
}
