#include<iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--)
	{
		string a;
		unsigned long long b;
		cin>>a>>b;
		int n=a.length()-1;
		int r=a[n]-'0';
		if(b==0){cout<<"1"<<endl;continue;}
		if(a[n]=='0' || a[n]=='1' || a[n]=='5' || a[n]=='6')cout<<a[n]<<endl;
		else if(a[n]=='4' || a[n]=='9')
		{
			if(b%2==0)cout<<r*r%10<<endl;
			else cout<<a[n]<<endl;
		}
		else
		{
			switch(b%4)
			{
				case 0:if(r%2)cout<<"1"<<endl;
					   else cout<<"6"<<endl;
					   break;
				case 1:cout<<a[n]<<endl;
					   break;
				case 2:cout<<r*r%10<<endl;
					   break;
				case 3:cout<<r*r*r%10<<endl;
			}
		}
	}
	return 0;
}

