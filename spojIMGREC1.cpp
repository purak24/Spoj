#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		while(n--)
		{
			int r,c,count=0,flag=0;
			cin>>r>>c;
			char str[r][c];
			for(int i=0;i<r;++i)
				{
					for(int j=0;j<c;++j)
					{
						cin>>str[r][c];
						if(str[r][c]=='x')count++;
						if(count>1){flag=1;break;}
					}
					if(count==1){flag=0;break;}
					if(flag)break;
				}
			if(flag)cout<<0;
			else cout<<"x";	
		}	
		cout<<endl;
	}
}
