#include<iostream>
using namespace std;
int main()
{

enum MarvellousBatches{PPA=1,LB=2,LSP=3,PYTHON=4,Default=5}; //bydefault it start from 0 if we want  to start from perticular number then use = operator
const int fees[]={15000,16000,17000,18000};
const float duration[]={3.5,4.0,3.5,4.5};
int choice=0;
cout<<"Select the batch you want to join\n";
cout<<"1:PPA\n";
cout<<"2:LB\n";
cout<<"3:LSP\n";
cout<<"4:PYTHON\n";
cin>>choice;
switch(choice)
{
case PPA:
cout<<"Thank you for selecting pre-placement activity batch\n";
cout<<"Duration is:"<<duration[PPA]<<"\n";
cout<<"fees is:"<<fees[PPA]<<"\n";
break;
case LB:
cout<<"Thank you for selecting LB batch\n";
cout<<"Duration is:"<<duration[LB]<<"\n";
cout<<"fees is:"<<fees[LB]<<"\n";
break;
case LSP:
cout<<"Thank you for selecting LSP batch\n";
cout<<"Duration is:"<<duration[LSP]<<"\n";
cout<<"fees is:"<<fees[LSP]<<"\n";
break;
case PYTHON:
cout<<"Thank you for selecting PYTHON batch\n";
cout<<"Duration is:"<<duration[PYTHON]<<"\n";
cout<<"fees is:"<<fees[PYTHON]<<"\n";
break;
case Default:
cout<<"call admin for furthr inquiry\n";
cout<<"mobile no. is:9730769606\n";
cout<<"thank you..\n";
break;

} 
return 0;}