//program for implementing all parameter passing techniques in cpp

#include<iostream>
using namespace std ;
#include<conio.h>
class A {
public:
    void add (int a); //use value variable
    void add (int *a); //use address/pointer variable
    void ad (int &a);//use of refference variable as formal parameter
};
void A :: add(int a)
{
    a = a+ 100;
}
void A :: add(int *a)
{
    *a=*a+100;
}
void A :: ad(int &a)
{
    a = a+ 100;
}
int main()

{
    int x;
    clrscr();
    cout<<"call by value paramer passing technique";
    cout<<"enter value of x=";
    cin>>x;
    A ob;
    cout<<"the value of x before call="<<x<<endl;
    ob.add(x); //passing actual/value variable
    cout<<"the value of x after call="<<x<<endl<<endl;
    cout<<"call by address/pointer paramer passing technique";
    cout<<"enter value of x=";
    cin>>x;
    cout<<"the value of x before call="<<x<<endl;
    ob.add(&x); //passing address of variable
    cout<<"the value of x after call="<<x<<endl<<endl;
    cout<<"call by refferance paramer passing technique";
    cout<<"enter value of x=";
    cin>>x;
    cout<<"the value of x before call="<<x<<endl;
    int &y=x;//creating refference variable
    ob.ad(y);//passing refferance variable
    cout<<"the value of x after call="<<x<<endl<<endl;

    getch();

}