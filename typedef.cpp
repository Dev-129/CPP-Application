#include<iostream>
using namespace std;
int main()
{
	typedef int NUMBER;
	typedef char LETTER;
	LETTER ch= 'm';
	NUMBER no= 10;
	cout<<no<<"\n";
	cout<<ch<<"\n";
	cout<<sizeof(no)<<"\n";
	cout<<sizeof(ch)<<"\n";
	typedef const int * CPTR;
	CPTR p=&no;
	cout<<p<<"\n";
	
	return 0;
}    