#include<iostream>
#define STACK_SIZE 256
using namespace std;
typedef char ElemType;
class Stack{
	ElemType string[STACK_SIZE];
	int tos;
	public:
	int isEmpty(){
		if(tos>=STACK_SIZE)return 1;
		else return 0;
	}
	void push(ElemType value){
		tos--;
		string[tos]=value;
	}
	ElemType pop()
	{
		ElemType temp;
		if(tos>=STACK_SIZE)return 0;
		else
		{
			temp=string[tos];
			tos++;
			return temp;
		}
	}
	ElemType top()
	{
		if(tos<STACK_SIZE)return string[tos];
		else return 0;
	}
	void MakeNull()
	{
		tos=STACK_SIZE;
	}
	int Priority(ElemType value)
	{
		int c=0;
		if(value=='+')c=1;
		else if(value=='-')c=2;
		else if(value=='*')c=3;
		else if(value=='/')c=4;
		else if(value=='^')c=5;
		else if(value=='(')c=0;
		return c;
	}	
	int Operator(ElemType value)
	{
		if(value=='+' || value=='-' ||value =='*' || value=='/' || value=='^')return 1;
		else return 0;
	}
};

int main()
{
	int k;
	cin>>k;
	Stack a;
	a.MakeNull();
	while(k--)
	{
		string s;
		cin>>s;
		int i=0;
		while(s[i]!='\0'){
			if(a.Operator(s[i]))
			{
				if(a.isEmpty()!=1)
				{
					if(a.Priority(a.top())>=a.Priority(s[i]))
					{
						while(!a.isEmpty() && a.Priority(a.top())>=a.Priority(s[i]))
						{
							cout<<a.pop();
						}
					}
				}
				a.push(s[i]);
			}
			else if(s[i]=='(')a.push(s[i]);
			else if(s[i]==')'){
				while(!a.isEmpty() && a.top()!='(')
				{
					cout<<a.pop();
				}
				a.pop();
			}
			else cout<<s[i];
			i++;
		}
	}
	return 0;
}
