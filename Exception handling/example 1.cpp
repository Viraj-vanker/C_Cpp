#include<iostream>
using namespace std;
void divide()
{
	int a,b,c;
	cout<<"Enter two value ";
	cin>>a>>b;
	if(b!=0)
	{
		c=a/b;
		cout<<"The division is "<<c;
	}
	else
	{
		throw b;
	}
}
int main()
{
	try
	{
		divide();
	}
	catch(int x)
	{
		cout<<"0 is not allowed ";
	}
}
