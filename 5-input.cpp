#include <iostream>
using namespace std;

int main()
{
    // What is Input?
    // Input is the process of receiving data from the outside world

    // For using cin
    // 1. must know datatype of variable

    string name, work;
    // string work;
    int age;

    cout << "What is your name? ";
    // ask name
    cin >> name;
    cout << "What is your age? ";
    cin >> age;
    cout << "What is your work? ";
    cin >> work;
    cout << "\nMy name is " << name;
    cout << "\nMy age is " << age;
    cout << "\nMy work is " << work;
    return 0;
}
