#include<bits/stdc++.h>
using namespace std;
class Overload{
    int marks;
    int *arr;
    protected: 
    int k;
    public: 
    Overload(int marks=0){
        this->marks=marks;
    }
    Overload(int a,int b,int c){
        arr=new int[3];
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
    }
    void operator+=(int value){
        marks+=value;
    }
    void getdata(){
        cout<<"Value : "<<marks<<'\n';
    }
    friend void operator-=(Overload &,int);
    friend Overload operator++(Overload &); // prefix 
    friend void operator--(Overload &); // prefix
    friend Overload operator++(Overload &,int); // postfix
    Overload operator--(int){  // postfix 
        Overload currval(*this);
        this->marks-=1;
        return currval;
    }  
    
    int operator[](int position){   // special method so can't use friend 
        return arr[position];
    }
};
void operator-=(Overload &obj,int value){
    obj.marks-=value;
}
Overload operator++(Overload &obj){
    obj.marks+=1;
    return obj;
}
void operator--(Overload &obj){
    obj.marks-=1;
}
Overload operator++(Overload &obj,int){
    Overload currval(obj);
    obj.marks+=1;
    return currval;
}
int main(){
    Overload a(5);
    a.getdata();
    a+=2;
    a.getdata();
    a-=3;
    a.getdata();
    cout<<'\n';
    Overload b(2);
    b.getdata();
    cout<<"Using prefix ++ \n";
    (++b).getdata(); // as we have returned object so ++b also an object
    // --b.getdata(); error!! as we not returned object
    cout<<"Using prefix -- \n";
    --b;
    b.getdata();
    cout<<"Using postfix ++ \n";
    (b++).getdata();
    cout<<"Using postfix -- \n";
    (b--).getdata();
    b.getdata();
    cout<<'\n';
    Overload arr(7,8,9);
    cout<<"Value of arr: "<<arr[0]<<'\n';
}