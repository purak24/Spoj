#include<iostream>
#include<map>
using namespace std;
map <double,double> memo;
int binarySearch(double n,int low,int high)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(n<memo[mid])high=mid-1;
		else if(n>memo[mid])low=mid+1;
		else return mid;
	}
	return high;
}

int main(){
	int i=0;
	memo[i]=0;
	double n,c=1;
	cin>>n;
	while(n!=0)
	{	
		if(n>memo[i])
		{	
			while(n>memo[i])
			{
				memo[i+1]=memo[i]+(1.0/(++c));
				i++;
			}
			cout<<c-1<<" card(s)\n";
		}
		else cout<<binarySearch(n,0,i)+1<<" card(s)\n";
		cin>>n;
	}
	return 0;
}
