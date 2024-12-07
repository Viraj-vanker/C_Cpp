#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void display();
};
void A :: display()
{
	cout<<"Enter two value ";
	cin>>a>>b;
	cout<<"Value of a & b "<<a<<ends<<b;
}
int main()
{
	A obj;
	obj.display();
}
