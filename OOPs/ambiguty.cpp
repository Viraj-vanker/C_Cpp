#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"I am A class "<<endl;
		}
};
class B
{
	public:
		void show()
		{
			cout<<"I am B class "<<endl;
		}
};
class C : public A,public B
{
	public:
		void show()
		{
			A::show();
			B::show();
			cout<<"I am C class "<<endl;
		}
};
int main()
{
	C c;
	c.show();
}
