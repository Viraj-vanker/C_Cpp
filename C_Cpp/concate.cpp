#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,l1,l2;
	char a[100],b[50];
	cout<<"Enter the string "<<endl;
	cin>>a;
	cout<<"Enter the string "<<endl;
	cin>>b;
	l1=strlen(a);
	l2=strlen(b);
	
	for(i=0;i<l2;i++)
	{
		a[l1+i]=b[i];
	}
	cout<<a;
} 
