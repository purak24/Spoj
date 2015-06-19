#include <iostream>
#include <cstdio>
using namespace std;
bool a[1000002];
const int N=1000002;
int main()
{
	int K,L,i,j,n,m,b,c,d;
	scanf("%d%d%d",&L,&K,&m);
	a[1]=true;
	for(i=1;i<=N;i++)
	{
		a[i]=false;
		if(i-1>=0 && a[i-1]==false)
			a[i]=true;
		else
		if(i-L>=0 && a[i-L]==false)
			a[i]=true;
		else
		if(i-K>=0 && a[i-K]==false)
			a[i]=true;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&n);
		if(a[n]==true)
			printf("A");
		else
			printf("B");
	}
	printf("\n");
	return 0;
}



