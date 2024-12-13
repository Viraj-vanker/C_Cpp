#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		void input()
		{
			cout<<"Enter value of a ";
			cin>>a;
		}
		void disp()
		{
			cout<<"value of a "<<a<<endl;
		}
		friend void swap(A ,B);
};
class B
{
	int b;
	public:
		void data()
		{
			cout<<"Enter value of b ";
			cin>>b;
		}
		void show()
		{
			cout<<"value of b is "<<b<<endl;
		}
		friend void swap(A ,B);
};
void swap (A t,B f)
{
	int temp;
	temp=t.a;
	t.a=f.b;
	f.b=temp;
	cout<<"The value of a is "<<t.a<<endl;
	cout<<"value of b is "<<f.b<<endl;
}
int main()
{
	A s;
	B o;
	s.input();
	o.data();
	cout<<"Before swapping "<<endl;
	s.disp();
	o.show();
	swap(s,o);
}
