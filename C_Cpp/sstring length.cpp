#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	char str[20];
	cout<<"Enter the string "<<endl;
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	cout<<"The length is "<<count<<endl;
}
