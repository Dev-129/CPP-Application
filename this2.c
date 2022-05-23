#include<iostream>
using namespace std;
class Demo
{
public:
int X;
int Y;
Demo(int a=10,int=20)
{
X=a;
Y=b;
}
// void fun(Demo *this,int )
void fun(int no)//1000
{
cout<<"inside funn\n";
}

};
int main()
{
Demo obj;
obj.fun(51);          //fun(&obj,51)//fun(100,51)  // adress of obj 1000
Demo obj2(11); 
Demo obj1(10,11);
return 0;
}