#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
		public:
			void show(int x,int y)
			{
				a=x;
				b=y;
				
				cout<<"value of x is "<<a<<endl;
				cout<<"Value of y is "<<b;
			}
};
int main()
{
	A a;
	a.show(2,3);
}
