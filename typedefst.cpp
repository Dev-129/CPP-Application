#include<iostream>
using namespace std;
int main()
{
struct Demo
{
int no1;
int no2;
};
/*
typedef struct Demo
{int no1;
int no2;}DEMO,*PDEMO,**PPDEMO;
*/

typedef struct Demo DEMO;
typedef struct Demo * PDEMO;
typedef struct Demo ** PPDEMO;
DEMO obj;// struct Demo obj
PDEMO p=&obj;  //struct Demo * p=&obj
PPDEMO q=&p;   //struct Demo **q=&p

return 0;
}