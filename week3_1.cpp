#include<iostream>
using namespace std;
class number
{
	public:
		int value;
		number(int v=0)
		{
			value=v;
		}
		void operator++()
		{
			++value;
		}
		number operator+(number obj)
		{
			number temp;
			temp.value=value+obj.value;
			return temp;
		}
		void display()
		{
			cout<<"value:"<<value<<endl;
		}
		
};
int main()
{
	number n1(5),n2(19),n3;
	cout<<"Before unary operation"<<endl;
	n1.display();
	++n1;
	cout<<"After unary operation(++n1):"<<endl;
	n1.display();
}
