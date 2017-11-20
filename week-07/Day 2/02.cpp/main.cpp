#include <iostream>
using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.

char string_printer(string a, string b){
    cout << a << " " << b << endl;
}

char string_printer(string a, string b, string c){
    cout << a << " " << b << " " << c << endl;
}

char string_printer(string a, string b, string c, string d){
    cout << a << " " << b << " " << c << " " << d;
}

int main() {

    string a1 = "This";
    string a2 = "is";
    string a3 = "the";
    string a4 = "code.";

    string_printer(a1, a2);
    string_printer(a1, a2, a3);
    string_printer(a1, a2, a3, a4);

	return 0;
}
