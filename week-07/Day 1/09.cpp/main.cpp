#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * Create a function that prints a multiplication table with a given base number.
 * It should take the base number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exceptions
 */

void multiplication(int j);

int main() {

    try{

    int a = 0;
    cin >> a;

    if(a < 0){
        throw runtime_error("This is too small");
    } else if(a > 10){
        throw runtime_error("Number's too big for szorzotabla yo");
    }
        multiplication(a);
    } catch(runtime_error &err){
        cout << err.what();
    }


    return 0;
}

void multiplication(int j){

    int result = 0;

    for (int i = 1; i <= 10; i++) {
            result = i *j;
        cout << i << " * " << j << " = " << result << endl;
        //printf("%d * %d = %d\n", i, j, result);
    }
}
