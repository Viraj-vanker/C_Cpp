#include<iostream>
using namespace std;
class A 
{
	int a,b;
	public:
		A(int x,int y)
		{
			a=x;
			b=y;
			cout<<"The addition is "<<a+b<<endl;
			cout<<"The multiplication is "<<x*y;
		}
};
int main()
{
	A a(5,6);
}
