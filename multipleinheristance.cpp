#include<iostream>
using namespace std;
//multilevel inheritance
class grandfather
{
	public:
	void g()
	{
		cout<<"This is grandfather class"<<endl;	
	}	
};
class father: public grandfather
{
	public:
		void f()
		{
			cout<<"This is father class"<<endl;
		}
};
class child: public father
{
	public:
		void c()
		{
			cout<<"This is child class"<<endl;
		}
};
int main()
{
	grandfather g1;
	father f1;
	child c1;
	g1.g();
	f1.f();
	c1.c();
}
