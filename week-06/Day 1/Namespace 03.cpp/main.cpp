#include <iostream>
using namespace std;

namespace Person {

    string name = "Adam";
    int age = 32;
    int fav_num = 7;

    int func() {
        age;

        return 2017 - age;
    }

}
// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born

int main()
{
    using namespace Person;

    cout << func() << endl;

    return 0;
}
