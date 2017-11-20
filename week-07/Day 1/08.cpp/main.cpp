#include <iostream>
#include <stdexcept>

using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

void get_fibonacci_number(int x);

int main() {

    try{

    int a = 0;
    cin >> a;

    if(a < 1){
        throw runtime_error("Too small num");
    }
    get_fibonacci_number(a);

    } catch(runtime_error &err){
        cout << err.what();
    }



	return 0;
}

void get_fibonacci_number(int x){

    int c = 0;
    int next = 0;
    int first = 0;
    int second = 1;

    for ( c = 0 ; c < x ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
   }
   cout << next;
}
