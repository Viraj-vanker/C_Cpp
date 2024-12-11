#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Hello I am constructor "<<endl;
		}
		void show()
		{
			cout<<"Hello I am normal method ";
		}
};
int main()
{
	A a;
	a.show();
}
