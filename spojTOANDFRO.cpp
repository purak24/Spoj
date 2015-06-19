#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0)
	{	int i=0,r=-1,t=-1;
		string s;
		cin>>s;
		char a[s.length()/n][n];
		while(s[i]!='\0')
		{
			if(i%n==0){++r;t*=-1;}
			if(t==1)a[r][i%n]=s[i++];
			else a[r][n-(i%n)-1]=s[i++];
		}
		for(int p=0;p<n;++p)
		for(int j=0;j<i/n;++j)
		cout<<a[j][p];
		cout<<endl;
		cin>>n;
	}
	return 0;
}
