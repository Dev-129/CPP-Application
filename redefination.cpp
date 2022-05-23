#include<iostream>
using namespace std;
class Demo
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
class Hello:public Demo
{   
	
	public:
	int x,y;
	void sun()  // defination
	{cout<<"inside sun\n";}
	void gun()    //redefination
	{cout<<"inside gun \n";}
};
int main()
{

return 0;
}