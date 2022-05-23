#include<stdio.h>
int addition(int ino1,int ino2)
{
auto int ans=0;// function=method=API(application programing interface)=procedure  
ans=ino1+ino2;
return ans;
}
int substraction(int ino1,int ino2)
{auto int ans=0;
ans=ino1-ino2;
return ans; 
}
int main()
{
auto int ivalue1=0,ivalue2=0,iret=0;
printf("Enter first no:");
scanf("%d",&ivalue1);
printf("Enter second no:");
scanf("%d",&ivalue2);
iret=addition(ivalue1,ivalue2);
printf("addition is%d\n",iret);
iret=substraction(ivalue1,ivalue2);
printf("substraction is:%d\n",iret);
return 0;
}