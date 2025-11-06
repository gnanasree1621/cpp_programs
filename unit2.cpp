#include<iostream>
using namespace std;
class demo
{
	public:
	void show();
	
};
void demo::show()
{
	cout<<"inside the class definition"<<endl;
}
int main()
{
	demo obj1;
	obj1.show();
	return 0;
}


