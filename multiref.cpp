#include<iostream>
using namespace std;
int main()
{
int ino=11;
int &x=ino;
int &y=ino;
int &z=x; 
int *p=&ino;
int *(&q)=p;//reference to pointer
int Arr[]={10,20,30,40};
int (&Brr)[4]=Arr;
cout<<"first no is:"<<Arr[0]<<"\n";
return 0;
}