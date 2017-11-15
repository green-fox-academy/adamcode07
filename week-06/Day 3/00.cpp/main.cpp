#include <iostream>
#include <vector>

using namespace std;

// Create a Human class which is a base class for
class Human{

    public:
        virtual void traveling(){
            cout << "Human is walking" << endl << endl;
        };
};

class SuperHuman: public Human {

    public:
        void traveling(){
            cout << "Superhuman is flying" << endl << endl;
        };

};

class AquaMan: public Human {

    public:
        void traveling(){
            cout << "AquaHuman is riding with dolphins" << endl;
        };

};

int main()
{
    Human travel;
    travel.traveling();

    SuperHuman tra;
    tra.traveling();

    AquaMan tr;
    tr.traveling();

    return 0;
}

// SuperHuman and AquaHuman
// Create a virtual function in Human class called traveling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.
