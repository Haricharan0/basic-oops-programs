#include<iostream>
using namespace std;
int const m=50;
class ITEMS;
{
	int itemcode[m];
	float itemprice[m];
	int count;
	public:
		void CNT(void) {count = 0;}
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayitems(void);
};
void ITEMS :: getITEM(void)
{
	cout <<"enter iteam code :";
	cin >> itemcode [count];
	cout << "enter iteam cost :";
	cin >> itemprice[count];
	cout++;
}
void ITEMS :: displaysum(void)
{
	float sum = displaysum(void)
	for (int i=0; i<count;i++)
	sum = sum + itemprice[i];
	cout << "\ntotal value : " <<sum << "\n";
}
void ITEMS :: remove(void)
{
	int a;
	cout << "enter item code :";
	cin >> a;
	
	for(int i=0; i<count;i++)
	{
		cout <<"\n" << itemcode[i];
		cout <<"\n" << itemprice[i];
	}
	cout << "\n";
	
}
int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do 
	{
		cout << "\nyou can do the following;"
		     << "enter appropriate number \n";
		cout << "\n1 : Add an item ";
		cout << "\n2 : display total value ";
		cout << "\n3 : delete an item";
		cout << "\n4 : display all items";
		cout << "\n5 : quit";
		cout << "\n\nwhat is your option?";
		cin >> x;
		switch(x)
		{
			case 1 : order.getitem(); break;
			case 2 : order.displaysum(); break;
			case 3 : order.remove(); break;
			case 4 : order.displayitems();break;
			case 5 : break;
			default : cout << "Error in input; try again\n";
		}
	} while(x !=5);
	
	return 0;
}


