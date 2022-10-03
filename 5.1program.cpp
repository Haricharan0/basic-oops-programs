#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
	public:
		void getdata (int a,float b);                   //prototype declaration,
		                                                // to be defined
		
		//function defined inside class 
		void putdata(void)
		
		{
			cout << "number :" << number << "\n";
			cout << "cost :" << cost << "\n";
			
		}
};
void item::getdata(int a,float b)
{
	number = a;
	cost = b;
}
int main()
{
	item x,y;
	cout << "\noobject x " << "\n";
	
	y.getdata(200,175.50);
	y.putdata();
	return 0;
	
}
