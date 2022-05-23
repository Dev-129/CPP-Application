 #include<iostream>
using namespace std;
int main()
{
int Arr[10];
int *p=NULL;
//p=(int*)malloc(sizeof(int)*10);
p=new int[10];
if(p==NULL)
{
	cout<<"memory  not allocate\n";
}
else{
	cout<<"memory  allocate"<< p<<"\n";
}
cout<<"memory of p:"<<*p<<"\n";
cout<<"memory of p:"<<sizeof(&p)<<"\n";
//free(p);
delete  []p;
return 0;
}