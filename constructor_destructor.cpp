#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
int a,b;
public:
A();//constructor
~A();//destructor 

};
A :: A () //def of constructor 
{
cout<<"enter a and b=";
cin>>a>>b;
cout<<"the value of a and b are="<<a<<endl<<b;
}
A :: ~ A()
{
cout<<"\nIt is destructor";
}
int main()

{
 A ob;//calling to constructor 
return 0;
getchar();
}