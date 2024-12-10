#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"I am class A ";
		}
};
class B :virtual public A
{
	public:
		void input()
		{
			cout<<"I am class B ";
		}
};
class C :virtual public A
{
	public:
		void out()
		{
			cout<<"I am class C ";
		}
};
class D:public C,public B
{
	public:
		void output()
		{
			cout<<"I am class D ";
		}
};
int main()
{
	D d;
	d.show();
	d.input();
	d.out();
	d.output();
}
