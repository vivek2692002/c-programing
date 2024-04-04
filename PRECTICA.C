#include<iostream.h>
using namespce std;
int main()
{
	int a,b,c;

	cout<<"enter value of a:";
	cin>>a;

	cout<<"enter value of b:";
	cin>>b;

	cout<<"enter value of c:";
	cin>>c;

	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<"is maximum";
		}
		else
		{
			cout<<c<<"is maximum";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<b<<"is maximum";
		}
		else
		{
			cout<<c<<"is maximum";
		}
	}
	return(0);
}