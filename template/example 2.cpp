#include<iostream>
using namespace std;
template<class T>
class A
{
	public:
	T a;
	T b;
	void input()
	{
		cout<<"Enter the value of a ";
		cin>>a;
		cout<<"Enter the value of b ";
		cin>>b;
	}
	void output()
	{
		cout<<"value of a&b is "<<a<<ends<<b<<endl;
	}
};
int main()
{
	A<int>a;
	a.input();
	a.output();
	A<float>b;
	b.input();
	b.output();
}
