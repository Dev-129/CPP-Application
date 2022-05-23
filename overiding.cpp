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
void fun(int no)  // overloding function
{
cout<<"inside fun\n";
}
};
int main()
{

return 0;
}