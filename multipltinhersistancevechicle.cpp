#include<iostream>
using namespace std;
class vechicle
{
	public:
		void v()
		{
			cout<<"This is a vechicle"<<endl;
		}
};
class fourwheeler: public vechicle
{
	public:
		void f()
		{
			cout<<"This is a four wheeler"<<endl;
		}
};
class car: public fourwheeler
{
	public:
		void c()
		{
			cout<<"this is a car"<<endl;
		}
};
int main()
{
	vechicle v1;
	fourwheeler f1;
	car c1;
	v1.v();
	f1.f();
	c1.c();
}
