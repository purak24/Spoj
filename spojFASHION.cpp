#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--)
	{
		int n,sum=0;
		cin>>n;
		int men[n],women[n];
		for(int i=0;i<n;++i)cin>>men[i];
		for(int i=0;i<n;++i)cin>>women[i];
		sort(men,men+n);
		sort(women,women+n);
		for(int i=0;i<n;++i)sum+=men[i]*women[i];
		if(k)cout<<sum<<endl;
		else cout<<sum;
	}
	return 0;
}
