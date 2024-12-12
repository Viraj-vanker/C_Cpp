#include<iostream>
using namespace std;
template<class T>
void add(T a ,T b)
{
	cout<<"The addition is "<<a+b;
}
int main()
{
	int choice,s,t;
	cout<<"select addition type "<<endl;
	cout<<"1. Addition among int "<<endl;
	cout<<"2. Addition among float "<<endl;
	cout<<"3. Addition among char "<<endl;
	cin>>choice;
	switch(choice)
		{
			case 1:
				cout<<"Enter integer number ";
				cin>>s>>t;
				add(s,t);
				break;
				case 2:
					cout<<"Enter float number ";
					cin>>s,t;
					add(s,t);
					break;
					case 3:
						cout<<"Enter character ";
						cin>>s,t;
						add(s,t);
						break;
		}
}
