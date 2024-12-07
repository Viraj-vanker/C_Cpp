#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10];
	cout<<"Enter the string ";
	cin>>a;
	char b[10];
	cout<<"Enter the string ";
	cin>>b;
	char c[10];
	cout<<"Enter the string ";
	cin>>c;
	cout<<strupr(a)<<endl;
	cout<<strlwr(a)<<endl;
	cout<<strlen(a)<<endl;
	cout<<strrev(a)<<endl;
	cout<<strcpy(a,b)<<endl;
	
	if(strcmp(a,c)==0)
	{
		cout<<"String are same ";
	}
	else
	{
		cout<<"String are not same ";
	}
}
