#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;
		string s;
		cin>>s;
		int arr[] = {0,0,0,0,0,0,0,0};
		for(int i=0;i<s.length()-2;i++)
		{
			if(s[i]=='H')
			{
				if(s[i+1]=='H')
				{
					if(s[i+2]=='H')arr[7]++;
					else arr[6]++;
				}
				else
				{
					if(s[i+2]=='H')arr[5]++;
					else arr[4]++;
				}
			}
			else
			{
				if(s[i+1]=='H')
				{
					if(s[i+2]=='H')arr[3]++;
					else arr[2]++;
				}
				else
				{
					if(s[i+2]=='H')arr[1]++;
					else arr[0]++;
				}
			}
		}
		cout<<n;
		for(int i=0;i<8;++i)cout<<" "<<arr[i];
		cout<<endl;
	}	
	return 0;
}
