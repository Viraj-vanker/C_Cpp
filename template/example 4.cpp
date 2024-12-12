#include<iostream>
using namespace std;
template<class T>
class A
{
	public:
	T a;
	T b;
	void display(T a,T b)
	{
		cout<<"The addition is "<<a+b;
	}
 };
 int main()
 {
 	int choice;
 	cout<<"select addition type "<<endl;
	cout<<"1. Addition among int "<<endl;
	cout<<"2. Addition among float "<<endl;
	cout<<"3. Addition among char "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			A<int>a;
			a.display(10,20);
			break;
			case 2:
				A<float>b;
				b.display(10.3,20.5);
				break;
				case 3:
					A<float>c;
					c.display('a','b');
					break;
	}
 }
