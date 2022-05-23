#include<iostream>
namespace    //unnamed namespace  outsider cant access it 
{
void fun()
{
std::cout<<"inside fun...";
}
}   //no ; because its not a datatype
//if its datatype we have to use ; at the end.

int main()
{
	std::cout<<"jay ganesh...";
	fun();
	return 0;
}     