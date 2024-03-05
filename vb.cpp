#include<bits/stdc++.h>
using namespace std;
class Time{
 int hours; 
int minutes;
 public: 
Time()// constructor-1
 {cout<<"Constructor-1 called";}
 Time (int t) // constructor-2
 {
 hours = t / 60; 
minutes = t % 60;
 cout<<"\nConstructor-2 called";
 }
 };
  int main(){
 Time Tl; //object Tl created
 int period = 160;
 Tl = period; //int to class type
 return 0;
 }