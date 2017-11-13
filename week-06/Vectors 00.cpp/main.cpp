#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main() {

  vector <int> myVector;
  int size = 5;
  int i = 0;

  //myVector.push_back(22);
  for (unsigned int i = 0; i < size; i++)
  {
      myVector.push_back(rand());
  }

  for (unsigned int i = 0; i < size; i++)
    cout << myVector[i] << endl;

  cout << myVector[2];

  return 0;
}
