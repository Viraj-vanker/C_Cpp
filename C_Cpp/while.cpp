#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,t,gcd,lcm;
	
	cout<<"Enter two number ";
	cin>>a>>b;
	
	a=x;
	b=y;
	
	while (b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	gcd=a;
	lcm=(x*y)/gcd;
	
	cout<<"the lcm is "<<lcm<<endl;
	cout<<"the gcd is "<<gcd;
}
