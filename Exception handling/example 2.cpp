#include<iostream>
using namespace std;
void check(int a,int b)
{
	if(a>b)
	{
		throw a;
	}
	else if(a==b)
	{
		string d="The numbers are same ";
		throw d;
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
		check(5,5);
	}
	catch(int x)
	{
		cout<<"This is greater number "<<x;
	}
	catch (string d)
	{
		cout<<d;
	}
}
