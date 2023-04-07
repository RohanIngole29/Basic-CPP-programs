#include<iostream>
//#include<conio>
using namespace std;
class All {
public:
    int a,b;
    void All1() {
        cout<<"Enter the values of a=";
        cin>>a;
    }

    All operator +(All ob1)
    {
        All ob2 ;
        ob2.a=a+ob1.a;
        return ob2;
    }

    All operator -(All ob1)
    {
        All ob2 ;
        ob2.a=a-ob1.a;
        return ob2;
    }

    All operator *(All ob1)
    {
        All ob2 ;
        ob2.a=a*ob1.a;
        return ob2;
    }

    All operator /(All ob1)
    {
        All ob2 ;
        ob2.a=a/ob1.a;
        return ob2;
    }



};

int main() {
    All o1,o2,o3;
    o1.All1();
    o2.All1();
    o3=o1+o2;
    cout<<"the addition="<<o3.a<<endl;
    o1.All1();
    o2.All1();
    o3=o1-o2;
    cout<<"the sub="<<o3.a<<endl;
    o1.All1();
    o2.All1();
    o3=o1*o2;
    cout<<"the Multi="<<o3.a<<endl;
    o1.All1();
    o2.All1();
    o3=o1/o2;
    cout<<"the division="<<o3.a<<endl;
    return 0;
    getchar();
}