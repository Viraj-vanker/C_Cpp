#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void add(double a ,double b)
{
	int c;
	c=a+b;
	cout<<"addition is "<<c<<endl;
}
void add(char a,char b,char c)
{
	int d;
	d=a+b+c;
	cout<<"Addition is "<<d<<endl;
}
int main()
{
	int s;
	add(50.5,60.5);
	add('b','c','d');
	s=add(5,6);
	cout<<"Addition is "<<s;
}
