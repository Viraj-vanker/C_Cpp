#include<iostream>
using namespace std;
class shape
{
	
	int l,b,r;
    float pi=3.14;
	
	public:
	void rect()
		{
			cout<<"enter the value of length ";
			cin>>l;
			cout<<"enter the value of breath ";
			cin>>b;
			cout<<"The area of rectangle is "<<l*b<<endl;
		}
		void square()
		{
			cout<<"Enter the value of length ";
			cin>>l;
			cout<<"The area of square is "<<l*l<<endl;
		}
		void circle()
		{
			cout<<"nter the radius ";
			cin>>r;
			cout<<"The area of circle is "<<pi*r*r;
		}
};
int main()
{
	shape a;
	a.rect();
	a.square();
	a.circle();
}
