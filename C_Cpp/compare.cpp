#include<iostream>
using namespace std;
int main()
{
	char a[10],b[10];
	int i,count;
	cout<<"Enter the two string "<<endl;
	cin>>a>>b;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
			count=0;
		}
		else
		{
			count=1;
		}
	}
	if(count==0)
	{
		cout<<"The string is same ";
	}
	else
	{
		cout<<"The string is not same ";
	}
}
