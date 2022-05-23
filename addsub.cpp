#include<iostream>
using namespace std;

class Arithmatic
{
public:
//characteristics
int ino1;
int ino2;
//behaviour
Arithmatic()//constructor
{
	cout<<"Inside default constructor\n";
	ino1=0;
	ino2=0;
}
Arithmatic(int A,int B)// parametrised constructor
{
	cout<<"Inside parametrised constructor\n";
	ino1=A;
	ino2=B;
	
}
~Arithmatic()//tilta operator~ negative operator//destrocter
{
	cout<<"inside destrocter";
}
int addition()
{
	int ians=0;
	ians=ino1+ino2;
	return ians;
}
int substraction()
{int ians=0;
	ians=ino1-ino2;
	return ians;
	}	
};

int main()
{
	 int iValue1= 0, iValue2= 0, iRet= 0;
cout<<"Enter the first no:";
cin>>iValue1;
cout<<"Enter the second no:";//printf la call karnar  -> write la call karnar
cin>>iValue2;
Arithmatic obj1();
Arithmatic obj2(iValue1,iValue2);
iRet=obj2.addition();
cout<<"addition is:"<<iRet<<"\n";
iRet=obj2.substraction();
cout<<"Substraction is :"<<iRet<<"\n";
  
	return 0;
}   