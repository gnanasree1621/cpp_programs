#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int main()
{
	int a,b;
	cout<<"Enter a,b values:";
	cin>>a>>b;
	int sum=add(a,b);
	int difference=sub(a,b);
	cout<<"subtraction:"<<difference<<"\n";
	cout<<"Addition:"<<sum;
	return 0;
}
