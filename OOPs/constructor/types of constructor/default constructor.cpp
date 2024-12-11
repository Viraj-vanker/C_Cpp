#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			int c;
			cout<<"Enter the value of a ";
			cin>>a;
			cout<<"Enter the value of b ";
			cin>>b;
			c=a+b;
			cout<<"The answer is "<<c<<endl;
		}
		void show()
		{
			int c;
			c=a*b;
			cout<<"The multiplication is "<<c;
		}
};
int main()
{
	A a;
	a.show();
}
