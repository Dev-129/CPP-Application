  #include<iostream>
namespace Marvellous
{
void fun()
{
std::cout<<"inside fun...\n";
}
}   //no ; because its not a datatype
//if its datatype we have to use ; at the end.
namespace Infosystem
{
void fun()
{
std::cout<<"inside fun...\n";
}
}  
int main()
{
	std::cout<<"jay ganesh...";
	//fun();    // compiler get confused error
//Marvellous::fun();  //we can write this way
	//using namespace Marvellous;//
	using namespace Infosystem;// cause confusion error 
	fun();
	//Marvellous::fun();
	//Infosystem::fun();
	return 0;
}