#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21
  Student sd;
     sd.name = "John";
     sd.age = 21;

  cout << "He's called " << sd.name << ". His age is " << sd.age << endl;

  return 0;
}
