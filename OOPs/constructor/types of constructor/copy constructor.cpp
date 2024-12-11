#include<iostream>
using namespace std;
class A
{
	public:
		int rno,id,marks;
		A(int a,int b,int c)
		{
			rno = a;
			id =b;
			marks = c;
		}
		A(A&t)
		{
			rno=t.rno;
			id=t.id;
			marks=t.marks;
		}
		void display()
		{
			cout<<"The roll no is "<<rno<<endl;
			cout<<"The id is "<<id<<endl;
			cout<<"The marks is "<<marks<<endl;
		}
};
int main()
{
	A a(2,2,30);
	a.display();
	
	A b(a);
	b.display();
}
