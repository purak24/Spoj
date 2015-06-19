#include<iostream>
#include<map>
#include <ctime>
using namespace std;
int main()
{	clock_t begin = clock();
	int t,i=0,c=1;
	cin>>t;
	map<int,int> a;
	while(t--)
	{
		int n,ans;
		cin>>n;
		if(n<=a[i])
		{
			int k=i;
			while(n<a[k])k--;
			ans=k;
		}
		else
		{
			while(a[i]<n)
			{
				i++;
				a[i]=i*(i+1)/2;
			}
			if(a[i]==n)ans=i;
			else ans=i-1;
		}
		if(ans%2==0)
		{	int c=ans+2;
			int d=0;
			int prk=n-a[ans];
			if(prk==0){c-=2;d++;}
			while(prk!=0)
			{
				c--;d++;prk--;
			}
			cout<<"TERM "<<n<<" IS "<<c<<"/"<<d<<endl;
		}
		else
		{
			int c=1;
			int d=ans+1;
			int prk=n-a[ans]-1;
			if(prk==-1)--d;
			while(prk!=0 && prk!=-1)
			{
				c++;d--;prk--;
			}
			cout<<"TERM "<<n<<" IS "<<c<<"/"<<d<<endl;			
		}
		c=1;
	}
	clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  cout<<"Time ="<<elapsed_secs<<endl;
	return 0;
}
