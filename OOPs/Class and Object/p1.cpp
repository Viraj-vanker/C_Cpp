#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		void display()
		{
			cout<<"value of a is "<<a<<endl;
			cout<<"value of b is "<<b;
		}
};
int main()
{
	A obj;
	obj.a=10;
	obj.b=20;
	obj.display();
}
