#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void show()
		{
			cout<<"Enter the two value ";
			cin>>a>>b;
		}
		friend class B;
};
class B
{
	public:
		void display(A f)
		{
			cout<<"Value of a is "<<f.a<<endl;
			cout<<"Value of b is "<<f.b<<endl;
		}
};
int main()
{
	A d;
	B o;
	d.show();
	o.display(d);
}
