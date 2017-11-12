#include <iostream>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{

    string name = "Adam";
    cout << name << endl;
    //cout << endl;
    int age = 32;
    cout << age << endl;

    string coffee = "Likes coffee: ";
    cout <<  coffee;
    if (true)
        std::cout << "true" << endl;
    else
        std::cout << "false" << endl;



    return 0;
}
