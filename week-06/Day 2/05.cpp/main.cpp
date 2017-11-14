#include <iostream>
#include <string>

using namespace std;

class Circle {

private:
    float radius;

public:
    Circle (float radius){
        this->radius = radius;

    }

    float get_circumference(){
        return 2 * 3.14 * radius;
    }

    float get_area(){
        return 3.14 * radius * radius;
    }
};

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    Circle cl(5);
    // It should have a `get_circumference` method that returns it's circumference
    cout << cl.get_circumference() << endl;
    // It should have a `get_area` method that returns it's area
    cout << cl.get_area();

  return 0;
}
