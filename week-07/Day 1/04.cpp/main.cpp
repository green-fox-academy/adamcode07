#include <iostream>
using namespace std;

// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void counter_function(int t){

    if(t == 0){
        throw 11;
    }
}

int main(){

	try{

	int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    counter_function(b);

    int c = a/b;
    cout << c;

	}



    catch(int x){
        cout << "This no good. Code: " << x;
    }

	return 0;
}
