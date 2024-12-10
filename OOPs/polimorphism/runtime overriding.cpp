//runtime(dynamic) overriding
#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()
		{
			cout<<"I am parent class "<<endl;
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"I am child class "<<endl;
		}
};
int main()
{
	B b;
	A *p;
	p=&b;
	p->show();
}
