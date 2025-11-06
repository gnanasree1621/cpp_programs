#include<iostream>
using namespace std;
class Add
{
	public:
		int a,b,c;
		void add1()
		{
			cout<<"enter the values:";
		    cin>>a>>b;
			c=a+b;
			cout<<c;	
		}
		
};
int main()
{
	Add a1;
	a1.add1();
	return 0;
}
