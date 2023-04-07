#include<iostream>
using namespace std ;
#include<conio.h>
class A
{
public:
int *p,i;
void insert();
};
void A :: insert()
{
p=new int [5]; //memory allocation

cout<<"Enter the 5 elements";
{
for(i=0;i<5;i++)
{
cin>>p[i];
}

cout<<"your 5 elements are";
{
for(i=0;i<5;i++)
{
cout<<p[i];
cout<<" ";
}
delete p;
}}}
int main()

{
A ob;
ob.insert ();
return 0;
getchar();
}