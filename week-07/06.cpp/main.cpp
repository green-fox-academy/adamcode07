#include <iostream>
#include <stdexcept>

using namespace std;

// Create a function which throws a built-in exception
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void exception_handling(int t){
    if(t == 0){
        throw runtime_error("This needs to B fixed");
    }
}

int main() {

    try{

    int a = 0;
    int b = 2;

    exception_handling(b);
    int c = a/b;

    }

    catch (runtime_error &err){
        cout << err.what();
    }

	return 0;
}
