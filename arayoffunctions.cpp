O#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[23];
	public:
		void data()
		{
			cout<<"enter rollno and name:";
			cin>>rollno>>name;
		}
		void display()
		{
			cout<<"roll no:"<<rollno<<",Name:"<<name<<endl;
		}
		
};
int main()
{
	student s[3];
	int i;
	for( i=0;i<3;i++)
	{
		s[i].data();
	}
	cout<<"student details:"<<endl;
	for(i=0;i<3;i++)
	{
		s[i].display();
	}
	return 0;
}
