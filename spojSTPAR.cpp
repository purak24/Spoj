#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	while(t!=0)
	{	
		stack<int> lane; 
		int order[t];
		for(i=0;i<t;i++)cin>>order[i];
		int need = 1;
		bool state = true;
		for (i = 0; i < t; i++) 
		{
			while (!lane.empty() && lane.top() == need)
			 {
				need++;
				lane.pop();
			 }
			if (order[i] == need)
			 {
				need++;
			 } 
			 else if (!lane.empty() && lane.top() < order[i]) 
			 {
				state = false;
				break;
			 }
			 else
			 {
				lane.push(order[i]);
			 }
		}
		if(state)cout<<"yes"<<"\n";
		else cout<<"no"<<"\n";
		cin>>t;
	}
	return 0;
}
