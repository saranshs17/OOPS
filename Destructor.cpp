#include <bits/stdc++.h>
using namespace std;
class Dest
{
    static int count;

public:
    Dest()
    {
        count++;
        cout << "Object " << count << " created\n";
    }
    ~Dest()
    {
        cout << "Object " << count << " Destroyed\n";
        count--;
    }
};
int Dest::count = 0;
void fun(Dest &obj)
{ // copy not created but if pass by value then 1 more time destructor will be called
    cout << "In fun\n";
}
int main()
{
    cout << "In main \n";
    Dest obj1;
    {
        cout << "Entered the block\n";
        Dest obj2, obj3;
        cout << "Exited the block\n";
    }
    fun(obj1);
    cout << "Back to main\n";
}