#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {


	try{
	int a = 0;
	int b = 0;

	cin >> a;
    cin >> b;

	if(b == 0){
        throw 10;
	}

	int c = a/b;
	cout << c;

	}
	catch(int x){
        cout << "Ur error code is: " << x;
	}

	return 0;
}
