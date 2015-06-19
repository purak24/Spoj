#include<iostream>
#include <iostream>
using namespace std;
int dividebytwo(char s[])
{	int i=0,carry=0;
	while(s[i]!='\0'){
		char c=(char)(((s[i]-'0')+carry*10)/2+'0');
		carry=(s[i]-'0')%2;
		s[i]=c;
		i++;
	}
	return 0;
}
int main(){
	int k=10;
	while(k--)
	{	int carry=0,borrow=0,h=0,t=0;
		string s,p;
		cin>>s>>p;
		if(s==p){cout<<s<<endl<<"0"<<endl;continue;}
		while(s[h]!='\0'){++h;}
		while(p[t]!='\0'){++t;}
		if((p[t-1]-'0')%2!=0){
			if((s[h-1]-'0')%2!=0)h=-1;
		}
		if((s[h-1]-'0')%2!=0){
			if((p[t-1]-'0')%2==0)t=-1;
		}
		dividebytwo(&s[0]);
		dividebytwo(&p[0]);	
		int lens=s.length();
		int lenp=p.length();
		string r=s;
		while(lens>0)
		{	char c;
			if(h==-1){carry=1;h=0;}
			if(lenp>0){
			c=(char)(((s[lens-1]-'0')+(p[lenp-1]-'0')+carry)%10 + '0');
			carry=(s[lens-1]-'0'+p[lenp-1]-'0' + carry)/10;
			}
			else{
			c=(char)(((s[lens-1]-'0')+carry)%10 + '0');
			carry=(s[lens-1]-'0' + carry)/10;
			}
			s[lens-1]=c;
			lens--;lenp--;
		}
		lens=r.length();
		lenp=p.length();
		while(lens>0)
		{
			int diff;
			if(t==-1){borrow=-1;t=0;}
			if(lenp>0)diff=(r[lens-1]-'0')-(p[lenp-1]-'0')-borrow;
			else diff=(r[lens-1]-'0')-borrow;
			borrow=0;
			if(diff<0)
			{
				diff+=10;
				borrow=1;
			}
			r[lens-1]=(char)(diff+'0');
			lens--;lenp--;
		}
		int i=0;
		if(s!="0")while(s[i]=='0'){i++;}
		do{
			cout<<s[i++];
		}while(s[i]!='\0');
		cout<<endl;
		i=0;
		if(r!="0")while(r[i]=='0'){i++;}
		do{
			cout<<r[i++];
		}while(r[i]!='\0');
		cout<<endl;
}
	return 0;
}

