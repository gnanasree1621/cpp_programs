#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a,b,c values";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"a is biggest";
	}
	if(b>a && b>c)
	{
		cout<<"b is biggest";
	}
	if(c>a && c>b)
	{
		cout<<"c is biggest";
	}
}
