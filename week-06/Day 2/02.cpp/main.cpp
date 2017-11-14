#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
  void print_data(){
        cout << "My age is " << age << " and my name is " << name << endl;
  }
};

int main() {

  Student st("Ocsi", 100);

  st.print_data();
  // Create a new instace of the Student class and
  // set it's name to "John" and
  // it's age to 21 with it's constructor

  return 0;
}
