#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(long long n;t>0;t--)
    {	
		cin>>n;
        cout<<((n * (2*n+1) * (n + 2)) >> 3)<<endl;
	}
    return 0;
}
