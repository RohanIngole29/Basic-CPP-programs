//This is for function overloading by using friend function
#include<iostream>
using namespace std;

class A {
public:
    int a,b,c,d,e;
    A() { //default constructor
        cout<<"Enter the value of a,b,c,d , & e"<<endl;
        cin>>a>>b>>c>>d>>e;
    }
    friend void operator-(A &ob) { //This defination of friend function
        ob.a=-ob.a;
    }
    friend void operator++(A &ob) { //This defination of friend function
        ob.b=++ob.b;
    }
    friend void operator--(A &ob) { //This defination of friend function
        ob.c=--ob.c;
    }
    friend void operator!(A &ob) { //This defination of friend function
        ob.d=!ob.d;
    }
    friend void operator~(A &ob) {
    ob.e=~ob.e;
    
    }
    int put() {
        cout<<"The unary - value of  a="<<a<<endl;
        cout<<"The increment value of ++b="<<b<<endl;
        cout<<"The decrement value of --c="<<c<<endl;
        cout<<"The logical not value of !d="<<d<<endl;
        cout<<"The compleme value of e="<<e;
         return 0;
    }
};

int main() {
    A obj;
    -obj;//operator call
    ++obj;//operator call
    --obj;//operator call
    !obj;//operator call
    ~obj;
    obj.put();
    return 0;
}