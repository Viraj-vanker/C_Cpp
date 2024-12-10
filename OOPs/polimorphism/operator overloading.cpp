#include<iostream>
using namespace std;
class A
{
	public:
	int a=10;
	int b=20;
	void operator-()
	{
		a=-a;
		b=-b;
	}
	void display()
	{
		cout<<"value of a "<<a<<endl;
		cout<<"value of b "<<b<<endl;
	}
};
int main()
{
	A s;
	s.display();
	-s;
	s.display();
}
