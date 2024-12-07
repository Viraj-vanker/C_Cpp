#include<iostream>
using namespace std;
class A
{
	public:
		string brand;
		int year;
		void display()
		{
			cout<<"Car brand --> "<<brand<<endl;
			cout<<"manufacture year --> "<<year<<endl;
		}
};
int main()
{
	A  obj;
	obj.brand="toyota ";
	obj.year=2000;
	
	obj.display();
}
