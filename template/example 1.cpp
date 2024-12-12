#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	int x;
	float y;
	int z;
	x=add(20,30);
	y=add(30.5,60.6);
	z=add('a','b');
	cout<<"The addition is "<<x<<endl;
	cout<<"The addition is "<<y<<endl;
	cout<<"The addition is "<<z;
}
