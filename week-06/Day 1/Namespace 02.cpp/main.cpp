#include <iostream>
using namespace std;

namespace Person {

    string name = "Adam";
    int age = 32;
    int fav_num = 7;

    }

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

int main()
{

    using namespace Person;

    cout << name << endl;
    cout << age << endl;
    cout << fav_num << endl;

    return 0;
}
