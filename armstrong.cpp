#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n value";
	cin>>n;
	int result=0,temp;
	temp=n;
	while(temp>0){
		int digit=temp%10;
		result+=digit*digit*digit;
		temp=temp/10;
	}
	if(n==result)
	{
		cout<<"n is armstrong";
	}
	else
	{
		cout<<"n is not a armstrong";
	}
	
}
