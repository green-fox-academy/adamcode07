#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

void even_printer(int n);

int main() {

  try{
  int a = 0;
  cin >> a;

  if(a < 0){
    throw runtime_error("Gimme bigger");
    }
    even_printer(a);
  }
  catch(runtime_error &err){
    cout << err.what();
    }

  return 0;
}

void even_printer(int n){

    int i;
    for(i = 0; i < 2*n; i++){
        if(i % 2 == 1){
            cout << " " << i;
        }
    }

}
