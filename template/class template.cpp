#include<iostream>
using namespace std;
template<class T>
class A
{
	public:
	T a;
	T b;
	A(T x,T y)
	{
		a=x;
		b=y;
		cout<<"The value of x "<<a<<x<<endl;
		cout<<"The value of y "<<b<<y<<endl;
	}
};
int main()
{
	A<int>a(5,6);
	A<float>b(8.6,4.6);
}
