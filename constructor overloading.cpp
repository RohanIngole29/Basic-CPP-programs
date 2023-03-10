// W.A.P. to implement constructor overloading
#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
    int a,b,c,x,y;
public:
    A();//decleration of default constructor
    A(int x,int y);//declaration of parameterised constructor
    A(A &);//declaration of copy constructor
    void add();
    void sub();
    void multi ();
};
A :: A() // defination of default constructor
{
    cout<<"the value of a & b=";
    cin>>a>>b;
}
void A :: add()
{
    c=a+b;
    cout<<"\n the addition by using default constructor="<<c;
}
A :: A(int x,int y)//defination of parameterised constructor
{
    a=x;
    b=y;
}
void A :: sub()
{
    c=a-b;
    cout<<"\n the substraction by using paramerarised constructor="<<c;
}
A :: A (A & obj)//defination of copy constructor
{
    x=obj.a;
    y=obj.b;
}
void A :: multi()
{
    c=x*y;
    cout<<"\n the multiplication by using copy constructor="<<c;
}
int main()

{   int x,y;
    clrscr();

    A ob;//calling to default constructor
    ob.add();
    cout<<"enter the value of x and y";
    cin>>x>>y;
    A obj(x,y);//calling to paramerarised constructor
    obj.sub();
    A obj2(obj);//calling to copy constructor
    obj2. multi ();
    return 0;
    getch();
}