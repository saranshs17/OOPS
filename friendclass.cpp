#include<bits/stdc++.h>
using namespace std;
class Complex;
class Calculator{
    int a,b;
    public:
    static Calculator getSum(Complex , Complex );
    void print(){
    cout<<"Complex number is: "<<a<<" + "<<b<<" i \n";
  }
};
class Complex{
  int a,b;
  public:
  void set(int a,int b);  
  void print(){
    cout<<"Complex number is: "<<a<<" + "<<b<<" i \n";
  }
  friend Calculator Calculator::getSum(Complex,Complex);
};
void Complex::set(int a,int b){
    this->a=a;
    this->b=b;
}
Calculator Calculator::getSum(Complex o1,Complex o2){
    Calculator o3;
    o3.a=o1.a+o2.a;
    o3.b=o1.b+o2.b;
    return o3;
}
int main(){
    Complex o1,o2;
    o1.set(1,2);
    o2.set(2,3);
    o1.print();
    o2.print();
    Calculator res;
    res=Calculator::getSum(o1,o2);
    res.print();
}