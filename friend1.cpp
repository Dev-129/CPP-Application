#include<iostream>
using namespace std;
class Demo
{
public:
int i;
protected:
int j;
private:
int k;
public:
Demo()
{
i=10;
j=20;
k=30;
}
friend void fun();
};
void fun()
{
Demo dobj1;
cout<<dobj1.i<<"\n";
cout<<dobj1.j<<"\n";
cout<<dobj1.k<<"\n";
}
int main()
{
	fun();
	return 0;    
}