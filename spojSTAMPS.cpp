#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,k=1;
	cin>>t;
	while(t--)
	{
		int n,a,sum=0,flag=1;
		cin>>n>>a;
		int i=a-1;
		int arr[a];
		for(int y=0;y<a;y++)cin>>arr[y];
		sort(arr,arr+a);
		while(sum<n)
		{
			if(i<0){flag=0;break;}
			sum+=arr[i--];
		}
		if(flag){cout<<"Scenario #"<<k<<":\n";
		cout<<(a-i-1)<<endl;}
		else {cout<<"Scenario #"<<k<<":\n";cout<<"impossible\n";}
		k++;
	}
	return 0;
}
