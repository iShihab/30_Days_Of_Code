#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Geeks
{
public:
    string geekname;
    int id;
    void printname();
    void printid()
    {
        cout << "Geek id is: " << id;
    }
};
void Geeks::printname()
{
    cout << "Geekname is : " << geekname;
}
int main(int argc, char const *argv[])
{
    Geeks obj1;
    obj1.geekname = "xry";
    obj1.id = 15;
    obj1.printname();
    cout << endl;
    obj1.printid();
    return 0;
}
