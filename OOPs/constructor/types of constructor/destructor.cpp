#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Hello I am constructor "<<endl;
		}
		~A()
		{
			cout<<"Hello I am destructor "<<endl;
		}
};
int main()
{
	A a;
}
