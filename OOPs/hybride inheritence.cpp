#include<iostream>
using namespace std;
class A 
{
	public:
		void show()
		{
			cout<<"I am simple inheritence "<<endl;
		}
};
class B:public A
{
	public:
		void disp()
		{
			cout<<"I am also simple inheritence "<<endl;
		}
};
class C
{
	public:
		void out()
		{
			cout<<"I am normal function "<<endl;
		}
};
class D:public C,public A
{
	public:
		void input()
		{
			cout<<"I am multiple inheritence "<<endl;
		}
};
int main()
{
	B b;
	b.show();
	b.disp();
	D d;
	d.out();
	d.input();
	d.show();
}
