#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
public:
int a;
void show();

class B
{
public:
int b;
void print();
};
};

void A :: show()
{
a=14;
cout<<"the a is in the class a="<<a<<endl;
}

void A :: B :: print ()
{
b=56;
cout<<"the b is in the class b="<<b;
}

int main()

{
clrscr();
A ob;
ob.show();
A :: B obj;
obj.print();

return 0;
getchar();
}