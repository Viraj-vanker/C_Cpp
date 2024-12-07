#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	cout<<"Addition is = "<<(a+=b)<<endl;
	cout<<"substraction is = "<<(a-=b)<<endl;
	cout<<"multiplication is = "<<(a*=b)<<endl;
	cout<<"division is = "<<(a/=b)<<endl;
	cout<<"modulo is = "<<(a%=b)<<endl;
}
