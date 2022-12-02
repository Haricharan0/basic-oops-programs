#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter values of a and b \n";
	cin >> a;
	cin >> b;
	int x = a-b;
	try
	{
		if(x !=0)
		{
			cout << "result(a/x) =" << a/x << "\n";
		}
		else 
		{
			throw(x);
		}
	}
	catch(int i)
	{
		cout<<"exception caught: DIVIDE BY ZERO\N";
	}
	cout<<"END";
	return 0;
}
