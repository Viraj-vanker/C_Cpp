#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"I am parent 1 "<<endl;
		}
};
class B
{
	public:
		void disp()
		{
			cout<<"I am parent 2 "<<endl;
		}
};
class C:public A,public B
{
	public:
		void out()
		{
			cout<<"I am child class "<<endl;
		}
};
int main()
{
	C c;
	c.show();
	c.show();
	c.disp();
}
