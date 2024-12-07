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
		void display()
		{
			cout<<"I am child class ";
		}
};
int main()
{
	B b;
	b.show();
	b.display();
}
