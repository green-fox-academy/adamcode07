#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throws a built-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {


	try{

	int a = 0;
	int b = 0;

	cin >> a;
	cin >> b;

	if(b == 0){
        throw runtime_error("This is too much");
	}

	int c = a/b;
	}

	catch(runtime_error &err){
        cout << err.what();
	}

	return 0;
}
