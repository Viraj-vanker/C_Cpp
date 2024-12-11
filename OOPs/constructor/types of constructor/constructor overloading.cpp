#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"hello I am normal defaul constructor ";
		}
		A(int a, int b)
		{
			int c=a+b;
			cout<<"The addition is "<<c<<endl;
		}
		A(double a,double b,double c)
		{
			int d=a*b*c;
			cout<<"The multiplication is "<<d<<endl;
		}
		void display()
		{
			cout<<"A is constructor ";
		}
};
int main()
{
	A a(2.2,6.3,8.1);
	A b();
	A c(5,6);
}
