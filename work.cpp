#include<iostream>
using namespace std;
class Demo
{
	public:
	int i;
	const int j;
	Demo(int a,int b):j(b)  //member initilization list
	{
	i=a;
	}
	void fun()
	{
	cout<<"inside fun\n";
	i++;//allowed
	//j++;not allowed
	}
	void gun(int a,const int b)const  //we can not write const in starting becoz it make return value const
	{
		int x= 10;
		const int y=20;
	cout<<"inside fun\n";
	//i++;//not allowed we cant change charachteristics of a class function is const
	//j++;  not allowed
	x++;  //allowed
	cout<<x<<"\n";
	//y++;  //not allowed
	a++;//allowed
	cout<<a<<"/n";
	//b++; //not allowed
	}
};
int main()
{
Demo obj(11,21);
const Demo obj1(11,21);
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
    obj.fun();
	obj.gun(10,20);
	//obj1.fun(); / /constant obj cant call only normal function
	obj1.gun(10,20); //constant obj can call only const function
	return 0;
}