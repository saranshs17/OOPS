#include<bits/stdc++.h>
using namespace std;
class Cons{
    int a;
    static int ct;
    public : 
    Cons(){
        a=0;
    };
    Cons(int x){ // parameterized 
        a=x;
    }
    Cons(Cons &obj){
        a=obj.a;
        cout<<"Copy Constructor invoked\n";
    }
    void show(){
        cout<<a<<'\n';
    }
};
int Cons::ct; // static variable common to all objects of class Cons
int main(){
    Cons obj,obj2(5),obj3;
    obj.show();
    obj=Cons(5);
    obj.show();
    obj.show();
    obj3=obj2; // Copy constructor not invoked
    Cons obj4=obj2 ;// Copy Constructor invoked
    Cons obj5(obj2);// Copy Constructor invoked
}