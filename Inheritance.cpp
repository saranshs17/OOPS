#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    public:
    
    A(int x){
        a=x;
        cout<<"A(int x) Constructor invoked\n";
    }
    A(){
        cout<<"A() Constructor invoked\n";
    }   // Have to create as B is inheriting A so , Default constructor must be present
    ~A(){
        cout<<"A() destructor invoked\n";
    } 
};
class B{
    int b;
    
    public:
    B(int y){
        b=y;
        cout<<"B(int y) Constructor invoked\n";
    }
    B(){
        cout<<"B() Constructor invoked\n";
    }
    ~B(){
        cout<<"B() destructor invoked\n";
    }
};
class C:public A,public B{
    int c;
     A obj;
    B obj2;
   
    public:
    C(int y){
        c=y;
        cout<<"C() Constructor invoked\n";
    }
    C(){
        cout<<"C() Constructor invoked\n";
    }
    ~C(){
        cout<<"C() destructor invoked\n";
    }
};
int main(){
    // A obj(1);
    C ob;
}