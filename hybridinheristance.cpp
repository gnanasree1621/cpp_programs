#include<iostream>
using namespace std;
class A
{
	public:
		void a()
		{
			cout<<"this is class A"<<endl;
		}
};
class B : public A
{
	public:
		void b()
		{
			cout<<"this is class B"<<endl;
		}
};
class C: public B
{
	public:
		void c()//FUNCTION
		{
			cout<<"this is class C"<<endl;
		}
};
class D: public B
{
	public:
		D()//CONSTRUCTOR
		{
			cout<<"this is class D"<<endl;
		}
};
int main()
{
	A a1;
	B b1;
	C c1;
	D d1;
	a1.a();
	b1.b();
	c1.c();
}
