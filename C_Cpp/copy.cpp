#include<iostream>
using namespace std;
int main()
{
	char a[10],b[10];
	int i;
	cout<<"Enter the string "<<endl;
	cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	cout<<"copy string is "<<b;
}
