#include<bits/stdc++.h>
using namespace std;
// class Derived;
// class Base {
// private:
//   int x=6;
// public:
//    void print() {
//     std::cout << x << std::endl;
//   }
//   friend void Derived::print();
// };
// class Derived : public Base {
// public:
//   void print() {
//     // Base::print();
//   }
// };
// int main() {
//   Derived d;
//   d.print(); // Prints "10"
//   return 0;
// }                                                           
class Base {
private:
  int x;

public:
  friend void Derived::print();
  virtual void print() {
    cout << x << endl;
  }
};

class Derived : public Base {
public:
  void print() {
    Base::print();
  }
};

int main() {
  Derived d;
  d.print(); // Prints "10"
  return 0;
}