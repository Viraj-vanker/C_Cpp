#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"1.hello world"<<endl;
	cout<<"2.hii"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"hello world ";
			break;
		case 2:
			cout<<"hii ";
			break;
		default:
			cout<<"invalide choice ";
	}
}
