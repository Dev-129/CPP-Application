#include<iostream>
using namespace std;
class Max
{
public:
int X,Y;
int maximum(int A,int B)
{if (A>B){cout<<"X is max:"<<A<<"\n";}
else{cout<<"Y is max:"<<B<<"\n";}
}
};
int main()
{
int ivalue1=0,ivalue2=0;
cout<<"Enter 1st no";
cin>>ivalue1;
cout<<"Enter 2nd no";
cin>>ivalue2;
Max obj;
obj.maximum(ivalue1,ivalue2);
return 0;
}