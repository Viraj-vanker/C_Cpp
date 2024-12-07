#include<iostream>
using namespace std;
class student
{
	int id;
	char name[100];
	float marks;
	public:
		void A()
		{
			cout<<"Enter the id "<<endl;
			cin>>id;
			
			cout<<"Enter the name "<<endl;
			cin >>name;
			
			cout<<"Enter the marks "<<endl;
			cin>>marks;
		}
		void display()
		{
			cout<<"student id is "<<id<<endl;
			cout<<"student name is "<<name<<endl;
			cout<<"student marks is "<<marks<<endl;
		}
};
int main()
{
	student obj;
	obj.A();
	obj.display();
}
