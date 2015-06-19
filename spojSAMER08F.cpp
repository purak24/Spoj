#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0)
	{	int s=0;
		for(int i=1;i<=n;++i)
		{
			s+=i*i;
		}
		cout<<s;
		cin>>n;
		if(n)cout<<endl;
	}
	return 0;
}
