#include<iostream>
using namespace std;
int main()
{

	float p,r,t,a,ci;
	cout<<"enter amount:";
	cin>>p;
	cout<<"\n"<<"enter rate:";
	cin>>r;
	cout<<"\n"<<"enter time:";
	cin>>t;
	a=p;
	for(int i=0;i<t;i++)
	{
			a=a+(a*r/100);
	}
	ci=a-p;
	cout<<"compound interest:"<<ci;
}
