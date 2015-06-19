#include<iostream>
using namespace std;
int negabinary(unsigned int value)
{
	unsigned int Schroeppel = 0xAAAAAAAA; // =2/3*(4^16-1)
	return (value + Schroeppel) ^ Schroeppel; // eXclusive OR
	// to be interpreted as a bitstring
}
int main()
{
	int n;
	cin>>n;
	cout<<negabinary(n);
	return 0;
}
