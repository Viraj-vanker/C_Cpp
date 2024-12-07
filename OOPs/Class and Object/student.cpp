#include<iostream>
using namespace std;
class stu
{
	int id;
	string name;
	float marks;
	
	public:
		void input()
		{
			cout<<"Enter id ";
			cin>>id;
			
			cout<<"Enter name ";
			cin>>name;
			
			cout<<"Enter marks ";
			cin>>marks;
		}
		void output()
		{
			cout<<"Id of student is "<<id<<endl;
			cout<<"Name of student is "<<name<<endl;
			cout<<"Marks of student is "<<marks<<endl;
		}
};
int main()
{
	stu s[100];
	int i,n;
	cout<<"Enter the number of student ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].input();
	}
	for(i=0;i<n;i++)
	{
		s[i].output();
	}
}
