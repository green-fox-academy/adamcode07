#include <iostream>

using namespace std;

int main() {


    // store your personal data in Variables
    // string name, int age, int slice_of_pizza_you_can_eat
    string *name = NULL;
    int *age = NULL;
    int *slice_of_pizza_you_can_eat = NULL;
    // allocate memory dynamically for these variables
    name = new string("Adam");
    age = new int(32);
    slice_of_pizza_you_can_eat = new int(3);
    // create a sentense using these variables
    cout << "I am" << " " << *name << ". " << "My age is " << *age << ". " << *slice_of_pizza_you_can_eat;
    // free the allocated memory
    delete name;
    delete age;
    delete slice_of_pizza_you_can_eat;

  return 0;
}
