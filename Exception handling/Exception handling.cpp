#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of a ";
	cin>>a;
	cout<<"Enter the value of b ";
	cin>>b;
	try
	{
		if(b!=0)
		{
			c=a/b;
			cout<<"The divition is "<<c;
		}
		else
		{
			throw b;
		}
	}
	catch(int exp)
	{
		cout<<"The value of b not be 0 ";
	}
}
