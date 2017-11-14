#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;

    Student(string name) {
      this->name = name;
    }
    string greet(){

        return name;
        //cout << "Hello my name is " << name << endl;

    }

};

int main() {
  // Create a method on the Student class called "greet"
  // that returns a string
  // like: "Hello my name is: <student name>"
  Student st("Adam");
  //st.print_data();
  cout << "Hello my name is " << st.greet() << endl;

  return 0;
}
