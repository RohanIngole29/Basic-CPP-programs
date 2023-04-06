#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
public:
void show();

};
void A :: show ()
{
cout<<"hello";
}
int main()

{ int i;
A obj[5];
for(i=0;i<5;i++)
{
obj[i].show ();
}

return 0;
getchar();
}