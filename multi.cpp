#include<iostream>
using namespace std;
class Base 
{
public: 
int i;
int j;
Base()
{
cout<<"Base Constructor\n";
}
~Base()
{
cout<<"Base destructor\n";
}

};
class Derived :public Base 
{
public:
int a,b,c;
Derived()
{
cout<<"Derived Constructor\n";
}
~Derived()
{
cout<<"Derived destructor\n";
}


};
class Derived1:public Derived
{
public: 
int k,l;
Derived1()
{
cout<<"Derived1 Constructor\n";
}
~Derived1()
{
cout<<"Derived1 destructor\n";
}

};

int main()
{
Derived1 obj;	
return 0;
} 