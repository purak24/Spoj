#include<iostream>
#include<map>
using namespace std;
int main()
{
	string s;
	cin>>s;
	while(s!="0")
	{
		map<int,int> a;
		int i=0,w;
		if(s[i+1]-'0'!=0)a[i]=1;
		i++;
		while(s[i]!='\0')
		{	
			w=(s[i-1]-'0')*10+(s[i]-'0');
			if(s[i+1]-'0'==0 || s[i-1]-'0'==0)w=27;
			if(w<=26)
			{
				
				if(i==1)a[i]=a[i-1]+1;
				else a[i]=a[i-1]+a[i-2];
			}
			else a[i]=a[i-1];
			i++;
			if(s[i]=='0'){a[i]=a[i-1];i++;}
		}
		if(s[0]-'0'==0)cout<<"0"<<endl;
		else cout<<a[i-1]<<endl;
		cin>>s;
	}
	return 0;
}
