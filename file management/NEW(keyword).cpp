#include<iostream>
using namespace std;
class A
{
	int id;
	string name;
	float marks;
	public:
		void input()
		{
			cout<<"Enter value of id ";
			cin>>id;
			cout<<"Enter the name ";
			cin>>name;
			cout<<"Enter the marks ";
			cin>>marks;
		}
		void output()
		{
			cout<<"The id is "<<id<<endl;
			cout<<"the name is "<<name<<endl;
			cout<<"The marks are "<<marks<<endl;
		}
};
int main()
{
	A *p;
	p=new A;
	p->input();
	p->output();
}
