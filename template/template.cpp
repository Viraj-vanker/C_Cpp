#include<iostream>
using namespace std;
template<class T>
void add(T a,T b)
{
	cout<<"The addition is "<<a+b<<endl;
}
int main()
{
	int m,n;
	add(20,30);
	add(30.5,60.6);
	add('a','b');
	cout<<"Enter the two value ";
	cin>>m>>n;
	add(m,n);
}
