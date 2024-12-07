#include<iostream>
using namespace std;
int main()
{
	char a[10],b[10];
	int i;
	cout<<"Enter the uppercase string ";
	cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	cout<<"The lowercase string is "<<a<<endl;
	
	cout<<"Enter the lowercase string ";
	cin>>b;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='a' && b[i]<='z')
		{
			b[i]=b[i]-32;
		}
	}
	cout<<"The upercase string is "<<b;
}
