#include<iostream>  
using namespace std;
class Demo
{
public:
int X;
int Y;
Demo()
{
cout<< "inside default constructor \n";
X=0;
Y=0;
}
Demo(int i,int j)
{
cout<<"inside parametrised constructor \n";
X=i;
Y=j;
}
Demo(Demo &ref)
{
cout<<"inside copy constructor\n";
X=ref.X;
Y=ref.Y;
}
~Demo()
{
cout<<"inside destructor\n";
}
};
int main()
{
Demo obj1(11,21);
Demo obj3(51,101);
cout<<"sizeof(obj1)"<<sizeof(obj1)<<"\n";
cout<<"sizeof(obj3)"<<sizeof(obj3)<<"\n";
cout<<"Enter the x value:"<<obj1.X<<"\n";
cout<<"Enter the x value:"<<obj3.X<<"\n";
Demo obj2(obj1);
cout<<"obj1.x is"<<obj1.X<<"\n";
cout<<"obj1.x is"<<obj2.X<<"\n";
obj1.X++;
cout<<"obj1.x is"<<obj1.X<<"\n";
cout<<"obj2.x is"<<obj2.X<<"\n";


return 0;
}