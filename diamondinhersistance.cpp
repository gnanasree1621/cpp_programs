#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"the parent class"<<endl;
		}
};
class B:public A
{
	
	public:
		B()
		{
			cout<<"B is the child for A"<<endl;
		}
};
class C:public A
{
	public:
		C()
		{
			cout<<"C is the child for A"<<endl;
		}
};
class D:public B,public C
{
	public:
		D()
		{
			cout<<"D is the child for B,C"<<endl;
		}
};
int main()
{
	D obj;
}
