#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	//Create a vector of integers
	vector <int> myVector;
//	int size = myVector.reserve(10);

	unsigned int i;
	for (i = 0; i < 10; i++)
    {
        myVector.push_back(rand() % 11);
    }

    for (i = 0; i < 10; i++)
        cout << myVector[i] << endl;

	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

  return 0;
}
