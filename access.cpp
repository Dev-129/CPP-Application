#include<iostream>
using namespace std;
class Demo
{
	int i;//private access specifier by default
public:
int X;

private:
int Y;

public:
Demo()
{
X=10;
Y=20;
i=30;
}
void fun()
{
cout<<"inside public fun\n";
cout<<Y;//allowed
gun();
}
private:
void gun()
{
cout<<"inside public gun\n";
cout<<Y;//allowed

}

};
int main()

{
	Demo obj;
	cout<<obj.X<<"\n";  //allowed
	//cout<<obj.Y<<"\n";  ///not allowed
	//cout<<obj.i<<"\n";   //not allowed
	obj.fun();//allowed
	//obj.gun();//not allowed

return 0;
}