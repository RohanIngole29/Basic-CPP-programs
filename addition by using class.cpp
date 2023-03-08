#include<iostream>
#include<conio.h>
using namespace std ;
 
 class A
{ 
 public:
int a,b,c;
  void add();


};
 void A :: add()
{
cout<<"Enter a & b";
cin>>a>>b;
c=a+b;
cout<<"the addition="<<c;

}

int main()
{
 A ob;
 ob.add();
return 0;
getchar();
}