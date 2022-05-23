#include<iostream>
using namespace std;
class Demo
{
public:
int i,j;
static int x;
Demo()
{
cout<<"inside default constructor\n";
i=10;
j=20;
}
};
int Demo::x=30;
int main()
{
	
	
Demo obj1;
obj1.i;

Demo obj2;
cout<<sizeof(obj1)<<"\n";//8
cout<<sizeof(obj2)<<"\n";//8
cout<<obj2.i<<"\n";
cout<<obj1.i<<"\n";//10
cout<<Demo::x;

return 0;
}