#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	while(!(a==0 && b==0 && c==0))
	{
		if(b==(a+c)/2)cout<<"AP "<<c+b-a<<endl;
		else cout<<"GP "<<c*(b/a)<<endl;
		cin>>a>>b>>c;
	}
	return 0;
}
