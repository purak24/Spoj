#include<iostream>
using namespace std;
int main()
{
	long long int a;
	cin>>a;
	if((a&(a-1))==0)cout<<"TAK";
	else cout<<"NIE";
	return 0;
}
