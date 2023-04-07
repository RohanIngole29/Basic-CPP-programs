#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
public:
void show();
void show(int p);
};
void A :: show ()
{
cout<<"welcome to function overloading\n";
}
void A :: show (int p)
{ 
cout<<"the value of p="<<p;
}
int main()

{
int x;
x=29;
A o;
o.show();
o.show(x);
return 0;
getchar();
}