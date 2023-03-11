//write a progrom to Check Perfect Number.

#include<iostream>
using namespace std ;
#include<conio.h>
int main()
{
  clrscr();
  int n,i=1,sum=0;

  cout<<"Enter a number: ";
  cin>>n;

  while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==n)
      cout<<" is a perfect number";
  else
      cout<<" is not a perfect number";
   getch();
  return 0;
}
