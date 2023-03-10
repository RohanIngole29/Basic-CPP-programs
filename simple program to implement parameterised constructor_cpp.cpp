// W.A.P in CPP to implement parameterised constructor 

#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
    int a,b,c;
public:
    A(int x,int y); //declaration of parameterised constructor

};
A :: A (int x,int y) //parameterised constructor defination
{
    a=x;
    b=y;
    cout<<"\n"<<a;
    cout<<"\n"<<b;
}
int main()

{   int x,y;
    clrscr ();
    cout<<"enter value of x & y";
    cin>>x>>y;
    A ob(x,y); //parameterised constructor call
    return 0;
    getch();
}