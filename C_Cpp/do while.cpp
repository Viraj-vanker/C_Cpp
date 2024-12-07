#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,t,gcd,lcm;
	
	cout<<"Enter two number ";
	cin>>x>>y;
	
	a=x;
	b=y;
	
	do
	{
		t=b;
		b=a%b;
		a=t;
	}
	while (b!=0);
	gcd=a;
	lcm=(x*y)/gcd;
	
	cout<<"The lcm is "<<lcm<<endl;
	cout<<"The lcgcd is "<<gcd;
}
