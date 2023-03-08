#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
 int a,b;
 public:
 A();// constructor declaration 

};
 
A :: A() //constructor defination
{
a=100;
b=200;
cout<<"the value of a"<<a;
cout<<"\nthe value of b"<<b;
}

int main()
{
clrscr();
A ob; //constructor call
return 0;
getchar();
}