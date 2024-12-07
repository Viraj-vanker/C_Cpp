#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter the value of a ";
			cin>>a;
			cout<<"Enter the value of b ";
			cin>>b;
		}
		void display()
		{
			cout<<"value of a is "<<a<<endl;
			cout<<"value of b is "<<b;
		}
};
int main()
{
	A obj;
	obj.input();
	obj.display();
}
