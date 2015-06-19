#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore(256, '\n');
	while(t--)
	{	cin.ignore(256, '\n');
		string s;
		getline(cin,s);
		int i=0,a=0,b=0,c=0,flagA=0,flagB=0,flagC=0;
		while(s[i]!='+')
		{
			if(s[i]=='m'){flagA=1;break;}
			if(s[i]==' '){i++;continue;}
			a=a*10+(s[i]-'0');
			i++;
		}
		while(s[i]!='+'){i++;}
		i++;
		while(s[i]!='=')
		{
			if(s[i]=='m'){flagB=1;break;}
			if(s[i]==' '){i++;continue;}
			b=b*10+(s[i]-'0');
			i++;
		}
		while(s[i]!='='){i++;}
		i++;
		while(s[i]!='\0')
		{
			if(s[i]=='m'){flagC=1;break;}
			if(s[i]==' '){i++;continue;}
			c=c*10+(s[i]-'0');
			i++;
		}
		if(flagA)cout<<(c-b)<<" + "<<b<<" = "<<c<<endl;
		else if(flagB)cout<<a<<" + "<<(c-a)<<" = "<<c<<endl;
		else if(flagC)cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;		
	}
	return 0;
}
