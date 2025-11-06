#include<iostream>
using namespace std;
class vechicle
{
	public:
		vechicle()
		{
			cout<<"this is a vechicle"<<endl;
		}
};
class car:public vechicle
{
	public:
		car()
		{
			cout<<"This is a 4 wheeler"<<endl;
		}
};
class sports
{
	public:
		sports()
		{
			cout<<"It is a sports category"<<endl;
		}
};
class BMW:public car,public sports
{
	public:
		BMW()
		{
			cout<<"this is sports car"<<endl;
		}
};
int main()
{
	BMW obj;
}
