#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"I am parent class "<<endl;
		}
};
class B:public A
{
	public:
		void disp()
		{
			cout<<"I am child class 1 "<<endl;
		}
};
class C:public A
{
	public:
		void out()
		{
			cout<<"I am child class 2 "<<endl;
		}
};
int main()
{
	C c;
	c.show();
	c.out();
	B b;
	b.show();
	b.disp();
}
