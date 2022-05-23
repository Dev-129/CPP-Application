#include<iostream>
using namespace std;
class Base1 
{
public: 
int i;
int j;
Base1()
{
cout<<"Base1 Constructor\n";
}
~Base1()
{
cout<<"Base1 destructor\n";
}

};
class Base2 
{
public: 
int x;
int y;
Base2()
{  
cout<<"Base2 Constructor\n";
}
~Base2()
{
cout<<"Base2 destructor\n";
}

};
class Derived :public Base1,Base2 
{
public:
int a;
Derived()
{
cout<<"Derived Constructor\n";
}
~Derived()
{
cout<<"Derived destructor\n";
}


};

int main()
{
Derived obj;	
return 0;
} 