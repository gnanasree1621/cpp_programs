#include<iostream>
using namespace std;
int main()
{
	int n=3,i;
	cout<<"enter size of an array:";
	cin>>n;9
	int arr[100];
	cout<<"enter integer:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"reversed array:";
	for(i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
