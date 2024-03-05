#include<bits/stdc++.h>
using namespace std;
class two;
class one{
    int a;
    public : 
    void initdata(int a){
        this->a=a;
    }
    void display(){
        cout<<a<<"\n";
    }
    friend void exchange(one &,two &);
};
class two{
    int a;
    public : 
    void initdata(int a){
        this->a=a;
    }
    void display(){
        cout<<a<<"\n";
    }
    friend void exchange(one &,two &);
};
void exchange(one &o1,two &o2){
    int temp=o1.a;
    o1.a=o2.a;
    o2.a=temp;
}
int main(){
    one o1;
    two o2;
    o1.initdata(1);
    o2.initdata(2);
    o1.display();
    o2.display();
    exchange(o1,o2);
    cout<<"Exchanging...\n";
    o1.display();
    o2.display();
}