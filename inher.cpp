#include<iostream>
using namespace std;
class Demo
{
public: 
int i;
private:
int j;
protected:
int K;

};
class Hello:public Demo  // Hello is a class which is Demo from base class
{

public:
int x;
private:
int y;
protected:
int z; 
public:
void fun()
{
	cout<<K<<"\n";
	}



};
int main()
{
	Demo dobj;
	cout<<dobj.i<<"\n";    //A
	//cout<<dobj.j<<"\n";    //Na
	//dobj.k;    //NA
	Hello hobj;
	hobj.x;     //A
	//hobj.y;      //NA
	//hobj.z;       //NA
	hobj.i;        //A
	//hobj.j;        //NA
	//hobj.k;         //A
  hobj.fun();
return 0;
} 