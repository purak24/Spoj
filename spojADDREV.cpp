#include <iostream>
using namespace std;
int rev(int n)
{   int reverse=0;
	while (n != 0)
   {
      reverse = reverse*10 + n%10;
      n = n/10;
   }
   return reverse;
}
int main(){
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		cout<<rev(rev(a)+rev(b))<<endl;
	}
}
