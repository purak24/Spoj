#include<iostream>
#include<map>
using namespace std;
int main()
{	map<int,int> a;
	int t,i=0,k=0,flag=1;
	cin>>t;
	while(t!=-1)
	{	
		if(a[i]>t)
		{	
			int j=i;
			while(j!=-1 && a[j]!=t)j--;
			if(j==-1)flag=0;
		}
		else
		{	
			int y;
			for(y=k; t>(3*y*y+3*y+1);y++)
					a[i++]=3*y*y+3*y+1;
			if(t!=3*y*y+3*y+1)flag=0;
			k=y-1;
			i--;
		}
		if(flag)cout<<"Y\n";
		else cout<<"N\n";
		flag=1;
		cin>>t;
	}
	return 0;
}
