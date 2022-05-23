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
}
static void gun(int value)
{
	cout<<"inside static gun\n";
	cout<<this->i<<"\n";  //error because its static function no obj for this
}
};
int Demo::x=30;

int main()
{
	cout<<Demo::x<<"\n";
	Demo::gun(11);
return 0;
}