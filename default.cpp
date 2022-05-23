#include<iostream>
using namespace std;
float Area(float fredious,float PI=3.14)
{
float fAns=0;
fAns=PI*fredious*fredious;
return fAns;
}
int main()
{
float fret=0.0;
fret=Area(10.4,7.2);
cout<<fret<<"\n";
fret=Area(10.6);
cout<<fret<<"\n";
return 0;
}