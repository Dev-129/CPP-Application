#include<iostream>
using namespace std;
int main()
{
//           0  1   2   3   4    5   6     //bydefault value
enum Days{sun,mon,tue,wen,thus,fri,sat};
enum Days obj;
obj=wen;
cout<< obj <<"\n";
cout<<sizeof(obj)<<"\n";
enum gender{male=1,female=2};  //explicit number provided by user
int Input=0;
cout<<"Enter your gender";
cout<<"1:Female\n";
cout<<"2:male\n";
cin>>Input;
switch(Input)
{
	case female:
	cout<<"Tax free limit is 3,00,000\n";
	break;
	case male:
	cout<<"Tax free limit is 2,50,000\n";
	break;
	default:
	cout<<"Invalid gender\n";
	break;
	
}
return 0;
}