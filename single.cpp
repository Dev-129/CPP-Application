#include<iostream>
using namespace std;
class Base
{
public:
int X,Y;
Base()
{
cout<<"inside base consructor\n";

}
~Base()
{
cout<<"inside base desructor\n";

}
void fun()
{
cout<<"inside base fun\n";

}
};
class Derived:public Base  //derived is a class which is derived from base class
{
public:
int i,j;
Derived()
{
cout<<"inside Derived consructor\n";
}
~Derived()
{
cout<<"inside Derived desructor\n";
}
void gun()
{
cout<<"inside Derived gun\n";
}

};
int main()
{
	cout<<sizeof(Base);
	cout<<sizeof(Derived);
  Derived dobj;
  dobj.fun();
  dobj.gun();
  
return 0;
}