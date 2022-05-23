#include<iostream>
using namespace std;
class Base
{
public:
int i,j;
void gun()
{
	cout<<"inside gun\n";
}
void fun()
{
cout<<"inside fun\n";  //defination of function    memory is in text section
}

};
class Derived:public Base
{   
	
	public:
	int i,j;
	void sun()  // defination
	{cout<<"Derived sun\n";}
	void fun()    //redefination
	{cout<<"Derived fun \n";}
};
int main(){
Base *bp1= new Derived(); //upcasting small class points to bigger one
bp1->fun();
bp1->gun();
//bp1->sun();  not allowed
cout<<"size of Base:"<<sizeof(Base)<<"\n";    //8
cout<<"size of Derived:"<<sizeof(Derived)<<"\n";   //16
return 0;
}