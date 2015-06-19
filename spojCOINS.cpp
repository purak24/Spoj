#include<iostream>
#include<map>
using namespace std;
typedef unsigned long long ll;
map<ll,ll> memo;
ll coin(ll c)
{	
	if(c==0||c==1 || c==2 || c==3 || c==5 || c==7 || c==11)return c;
	else if(memo[c]!=0)return memo[c];
	else { 
		ll t=coin(c/2)+coin(c/3)+coin(c/4);
		memo[c]=t;
		return memo[c];	
	}
	
}

int main()
{
	ll n;
	while(cin>>n)cout<<coin(n)<<endl;
	return 0;
}
