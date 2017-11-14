#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {


  int meret = 0;
  cout << "Gimme a numb" << endl;
  cin >> meret;

  int i = 0;
  int sum = 0;

  int *pointer = NULL;
  pointer = new int[meret];

  for (i = 0; i < meret; i++)
  {
      cout << "Gimme the nmbr" << i << endl;
      cin >> pointer[i];
          sum += pointer[i];
  }

  cout << "The avg is " << (float)sum/meret << endl;





  return 0;
}
