#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
public:
int a;
void show();
};
void A :: show()
{
cout<<"\nhello\n";
}
int main()

{
A ob,*p;
p=&ob;
p->a=10;
cout<<p->a;
p->show();
return 0;
getchar();
}