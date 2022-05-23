#include<iostream>
using namespace std;
class Base
{
public:
int x,y;
};
class Derived:public Base
{   
	
	public:
	int i,j;
	
};
int main()
{
//dynamic memory
Base *bp= new Base();  // there is no casting
Derived *dp= new Derived();
Base *bp1= new Derived();  // there is upcasting
//   Derived *dp1= new Base();  // there is down casting
cout<<sizeof(Base)<<"\n"; //8
cout<<sizeof(Derived)<<"\n";//16
return 0;
}