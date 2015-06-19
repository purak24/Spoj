#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=-1)
	{
		int sum=0,move=0;
		int a[n];
		for(int i=0;i<n;++i){cin>>a[i];sum+=a[i];}
		if(sum%n!=0){cout<<"-1\n";cin>>n;continue;}
		sum/=n;
		for(int i=0;i<n;i++)if(a[i]>sum)move+=a[i]-sum;
		cout<<move<<endl;		
		cin>>n;
	}
	return 0;
}
