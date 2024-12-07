#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[10],temp;
	int i,l;
	cout<<"enter the string ";
	cin>>str;
	l=strlen(str);
	for(i=0;i<l/2;i++)
	{
		temp=str[i];
		str[i]=str[l-1-i];
		str[l-1-i]=temp;
	}
	cout<<"The reverse string is "<<str;
}
