#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void getData();
    friend Complex sumbyData(Complex o1,Complex o2);
};
Complex sumbyData(Complex o1,Complex o2){
    Complex o3;
    o3.setData(o1.a+o2.a , o1.b+o2.b);
    return o3;
}
void Complex::getData(){
    cout<<"Complex number is: "<<a<<" + "<<b<<" i \n";
};

int main(){
    Complex o1,o2,sum;
    o1.setData(1,2);
    o2.setData(2,3);
    o1.getData();
    o2.getData();
    sum=sumbyData(o1,o2);
    sum.getData();
}