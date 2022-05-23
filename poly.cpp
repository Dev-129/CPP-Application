#include<iostream>
using namespace std;
class Demo
{
public:
int addition(int ino1,int ino2)//1000
{int ians=0;
ians=ino1+ino2;
return ians;
}
int addition(int ino1,int ino2,int ino3)//2000
{int ians=0;
ians=ino1+ino2+ino3;
return ians;
}
int addition(int ino1,int ino2,int ino3,int ino4)//3000
{int ians=0;
ians=ino1+ino2+ino3+ino4;
return ians;
}
};
int main()
{Demo obj;
int ret=0;   
//PUSH=10 THIS INSRUCTION DONNE BY COMPILER EARLLY TIME COVERSION
//PUSH=11
//CALL 1000;
ret=obj.addition(10,11);  //obk.addition@ii(10,11); compile did this change  
cout<<"addition is"<<ret<<"\n";
ret=obj.addition(10,11,31);
cout<<"addition is"<<ret<<"\n";
ret=obj.addition(10,11.31,41);
cout<<"addition is"<<ret<<"\n";

return 0;
}
  







// change no of orgument
// void fun(int,int)
//void fun(int,int,int)
//void fun(char,int,float)
//void fun(int,char,float)

  







