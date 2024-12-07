#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"I am 1st level parent class "<<endl;
		}
};
class B:public A
{
	public:
		void display()
		{
			cout<<"I am 2nd level parent class "<<endl;
		}
};
class C:public B
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
	c.display();
	c.out();
}
