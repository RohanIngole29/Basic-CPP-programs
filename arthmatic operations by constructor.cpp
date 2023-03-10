// W.A.P in CPP to perform add,sub,multi,div of two no. by using constructor 

#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
 int a,b,c;
 public:
 void add(); 
 void sub();
 void multi();
 void div();
 A();// constructor declaration 

};
 
A :: A() //constructor defination
{
a=200;
b=100;
cout<<"the value of a"<<a;
cout<<"\nthe value of b"<<b;
}

void A::add()
{
c=a+b;
cout<<"\nthe addition="<<c;
} 

void A::sub()
{
c=a-b;
cout<<"\nthe substraction="<<c;
}

void A::multi()
{
c=a*b;
cout<<"\nthe multiplication="<<c;
}

void A::div()
{
c=a/b;
cout<<"\nthe division="<<c;
}
int main()
{
clrscr();
A ob; //constructor call
ob.add();
ob.sub();
ob.multi();
ob.div();
return 0;
getchar();
}