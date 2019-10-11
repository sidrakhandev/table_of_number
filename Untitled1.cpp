#include <iostream>
using namespace std;

void tableOfNo(int *no)
{
	for (int i=1;i<=10;i++)
	{
		
		cout<<*no<<"*"<<i<<"="<<*no*i<<endl;
	}
	
	
}



int main()
{
	
	int numb;
	int *point;
	
	cout<<"Enter your number "<<endl;
	cin>>numb;
	point=&numb;
	tableOfNo( point);
	
	
	return 0;
}
