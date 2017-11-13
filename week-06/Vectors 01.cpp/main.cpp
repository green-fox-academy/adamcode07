#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print all elements of it
	vector <int> myVector;

	int i;
	int size = 5;

	for (unsigned i = 0; i < size; i++)
    {
        myVector.push_back(rand());
    }

    for (unsigned i = 0; i < size; i++)
    {
        cout << myVector[i] << endl;
    }



  return 0;
}
