#include<iostream>
using namespace std;
class add
{
	private:
		int a;
	protected:
		int b,c;
	public:
		add()
		{
			a,b,c;
			cout<<"enter the a & b values:";
			cin>>a>>b;
			c=a+b;
		}
		friend void friend_name(add s1);
};
void friend_name(add s1)
{
	cout<<"the sum of two digits:";
	cout<<s1.c;
}
int main()
{
	add s1;
	friend_name(s1);
}

