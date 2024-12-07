#include<iostream>
using namespace std;
int main()
{
	char ch,v;
	int a,b;
	here:
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
	cout<<"Enter the symbol (+,-,*,/,%) ";
	cin>>ch;
	if(ch=='+')
	{
		cout<<"Addition is = "<<a+b<<endl;
	}
	else if(ch=='-')
	{
		cout<<"substraction is = "<<a-b<<endl;
	}
	else if(ch=='*')
	{
		cout<<"multiplication is = "<<a*b<<endl;
	}
	else if(ch=='/')
	{
		cout<<"division is = "<<a/b<<endl;
	}
	else if(ch=='%')
	{
		cout<<"modulo is = "<<a%b<<endl;
	}
	else
	{
		cout<<"invalid choise ";
		goto here; 
	}
	cout<<"do you want to do more calculation ";
	cin>>v;
	if(v=='y' || v== 'Y')
	{
		goto here;
	}
}
