#include<iostream>
using namespace std;
class Base
{
public:
int i,j;
virtual void gun()  //2000
{
	cout<<"inside gun\n";
}
virtual void fun()    //1000
{
cout<<"inside fun\n";  //defination of function    memory is in text section
}
void sun()          //3000
{cout<<"inside sun\n"; }
virtual void run()  //4000
{cout<<"inside run\n"; }
};
class Derived:public Base
{   
	
	public:
	int i,j;
	void sun()  // redefination  7000
	{cout<<"Derived sun\n";}
	void fun()    //redefination   5000
	{cout<<"Derived fun \n";}
	virtual void gun()    ///6000
{cout<<"inside gun\n"; }
virtual void mun()     //8000
{cout<<"inside mun\n"; }
};
int main(){
Base *bp1= new Derived(); 
bp1->fun();
bp1->gun();
//bp1->sun();  not allowed
cout<<"size of Base:"<<sizeof(Base)<<"\n";    //8
cout<<"size of Derived:"<<sizeof(Derived)<<"\n";   //16
return 0;
}