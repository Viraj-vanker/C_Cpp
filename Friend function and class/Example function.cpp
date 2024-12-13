#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter value of a&b ";
			cin>>a>>b;
		}
		friend void add(A);
		friend void sub(A);
};
void add(A t)
{
	int c=t.a+t.b;
	cout<<"The addition is "<<c<<endl;
}
void sub(A s)
{
	int c=s.a-s.b;
	cout<<"The substraction is "<<c;
}
int main()
{
	A o;
	o.input();
	add(o);
	sub(o);
}
