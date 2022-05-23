#include<iostream>
using namespace std;
class Demo
{
public:
int x;
int y;
Demo()
{
cout<<"inside default\n";
}
~Demo()
{
cout<<"inside destructor\n";
}
void fun()
{
cout<<"inside fun\n";
}
};
int main()
{
Demo obj;  //static memory allocation
Demo *ptr=NULL;
ptr=new Demo;  //dynamic memory allocation
obj.fun();
ptr->fun();
      delete ptr;
return 0;
}