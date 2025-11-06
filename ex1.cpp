#include<iostream>
using namespace std;
int add(int *a,int *b)
{
	int e=*a+*b;
	cout<<e;
}
int main()
{
	int c=10,d=20;
	return add(&c,&d);
}
