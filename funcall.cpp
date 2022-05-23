#include<iostream>
using namespace std;
void Call_Value(int no)
{
	no++;
}
void Call_Adress(int *p)
{
	(*p)++;
}
void Call_Reference(int &ref)
{
	ref++;
}
int main()
{
	int a=10,b=10,c=10;
	Call_Value(a);
	cout<<a<<"\n";
	Call_Adress(&b);
	cout<<b<<"\n";
	Call_Reference(c);
	cout<<c<<"\n";
return 0;
}