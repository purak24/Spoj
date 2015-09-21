#include<iostream>
#include<math.h>
using namespace std;
bool prime[32000];
void sieveIt()
{
   for(int i=2;i<=32000;i++)
	   prime[i]=true;

   for(int j=2;j<=sqrt(32000);j++)
	   if(prime[j])
		   for(int k=j*j;k<32000;k+=j)
			   prime[k]=false;
}
 int main()
{
 	int T=0;
	long int p1,p2;
	long int size[100001];
	int index=0;
 	sieveIt();
	cin>>T;
	while(T--)
	{
		index=0;
		cin>>p1>>p2;;
		for(long int i=p1;i<=p2;i++)
		{
 			size[index]=i;
			index++;
		}
		long int num1 = size[0];
		long int rem;
		long int k;
		for(int t=2;t<=sqrt(p2);t++)
		{
			if(prime[t])
			{
			 rem = num1%t;
 			 k=0;
			if(rem)k +=t-rem;
			if(size[k]==t)k+=t;
			while(k<index)
				{
				size[k]=0;
				k +=t;
 				}
 			}
  		}
 		for(int h=0;h<index;h++)
			if(size[h]!=0 && size[h]!=1)cout<<size[h]<<endl;
	cout<<endl;
	}
 	return 0;
}
