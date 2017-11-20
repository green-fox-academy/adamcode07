#include <iostream>
using namespace std;

// create a function that adds two integers.
// Create an other function of the same name that takes 3 integers and returns the result of adding these 3 integers.
// Write code that uses both after one an other and prints out the results in a new line each.
// For input use 1 and 2, then 1, 2 and 3.

void sum_func(int a, int b);
int sum_func(int a, int b, int c);

int main() {


	int sum = 0;

	int x = 1;
	int y = 2;
	int z = 3;

	sum_func(x, y);
	cout << sum_func(x, y, z);

	return 0;
}

void sum_func(int a, int b){
    cout << a + b << endl;
}

int sum_func(int a, int b, int c){
    return a+b+c;
}
