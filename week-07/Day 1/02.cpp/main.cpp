#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {


	try{
	int a = 0;
	int b = 0;

	cin >> a;
    cin >> b;

	if(b == 0){
        throw 'A';
	}

	int c = a/b;
	cout << c;

	}
	catch(char x){
        cout << "Ur error code is: " << x;
	}

	return 0;
}
