#include <iostream>
#include <stdexcept>

using namespace std;
//Try to run the following code!

int main () {

    int z = 3;
    int int_array[5] = {1, 2, 3, 4, 5};

    try{
        if(z < 0){
            throw runtime_error("Try a bigger one");
        }
        else if (z > 4){
            throw runtime_error("Too big yaw");
        }

        cout << int_array[z];

    } catch(runtime_error &err){
        cout << err.what() << endl;
    }



    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!
