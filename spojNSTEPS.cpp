#include<iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--)
	{
		int x,y;
		cin>>x>>y;
		if(x==y || x-y==2)
		{
			if(x==y){
				if(x%2==0)cout<<2*x;
				else cout<<2*x-1;
			}
			else
			{
				if(x%2==0)cout<<x+y;
				else cout<<x+y-1;
			}
		}
		else 
		{
		cout<<"No Number";
		}
		if(k)cout<<endl;
	}
	return 0;
}
