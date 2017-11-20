#include <iostream>
using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void char_thrower(int cb){
    if(cb == 0){
        throw 'H';
    }
}

int main() {

    try{

    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    char_thrower(b);
    int c = a/b;
    cout << c;

    }

    catch(char x){
        cout << "Ur lame. Error code: " << x;
    }


	return 0;
}
