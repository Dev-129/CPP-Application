#include<iostream>
using namespace std;
class Demo
{
public:
int i,j;   //instance veriable
static int x;  //static class veriable
Demo(int a=10,int b=20)
{
cout<<"inside Demo constructor\n";
this->i=a;
this->j=b;
}
//void fun(Demo *this,int no )
void fun(int no)
{
	cout<<"inside nonstatic fun\n";
	cout<<this->i<<"\n";
	
	cout<<this->j<<"\n";
	cout<<no<<"\n";
	cout<<Demo::x<<"\n";
}
void fun1(int no)
{
	cout<<"inside nonstatic fun\n";
	cout<<this->i<<"\n";
	
	cout<<this->j<<"\n";
	cout<<no<<"\n";
	cout<<Demo::x<<"\n";
}
static void gun(int value)
{
	cout<<"inside static gun\n";
	
}
};
int Demo::x=30;

int main()
{
	cout<<Demo::x<<"\n";
	Demo::gun(11);
	Demo obj(11);
Demo obj2;	//constructor call
	obj.fun(21);
obj2.fun1(22);	//fun(&obj,21)
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	cout<<sizeof(obj)<<"\n";  
	obj.gun(11);
return 0;
}