#include<iostream>
using namespace std;
class Demo
{
	public:
	int i;
	const int j;
	Demo():j(20)  //member initilization
	{
		i=10;
		//j=20;
	}
	Demo(int a,int b):j(b),i(a)
	{
		cout<<"inside parametrised";
		b++;  // constant can be change in parametrised constructor 
		cout<<b<<"\n";//only for constructor
		
	}
	
};
int main()
{
Demo obj(11,21);
	cout<<obj.i<<"\n";//11
	cout<<obj.j<<"\n";//21
	obj.i++;
	//obj.j++;//not allowed
	cout<<obj.i;//12
	cout<<obj.j;//21
	return 0;
}