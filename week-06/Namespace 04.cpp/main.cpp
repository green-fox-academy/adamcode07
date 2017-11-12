#include <iostream>
using namespace std;

namespace Mark {

    string name = "Adam";
    int age = 32;
    int fav_num = 7;
    int func();

}

namespace Maria {

    string name = "Ize";
    int age = 17;
    int fav_num = 17;
    int func();

}
// create a function that can add the two age, and returns it
int func() {

 //       using Mark::age;
//        using Maria::age;

        int sum = 0;
        sum = Mark.age + Maria.age;

        return sum;
}

int main()
{

    using namespace Mark;
    using namespace Maria;

    cout << func() << endl;

    return 0;
}

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
