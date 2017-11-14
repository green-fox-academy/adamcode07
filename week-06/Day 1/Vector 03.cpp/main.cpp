#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	//create a vector of integers with the size of 20
	vector <int> myVector;
	myVector.reserve(20);
	int i = 0;
    //fill this vector with random numbers from 0 to 10
	for (i = 0; i < myVector.capacity(); i++)
    {
        myVector.push_back(rand()% 11);
    }
	//print the items of the vector
	for (i = 0; i < myVector.capacity(); i++)
    {
        cout << myVector[i] << endl << endl << endl;
    }
    //remove the even numbers, then print the items again
    for (i = 0; i < myVector.capacity(); i++){

        if (myVector[i] % 2 != 0)
        {
            cout << myVector[i] << endl;
    //erase-el
        }
    }
  return 0;
}
