#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise.
// Create 3 constructors for them:
// One empty which sets the member variable to 0;
// A copy constructor, that takes an Integer& argument
// A third one which takes an int as argument and makes the member variable equal to the int it took.
//
// Write code that uses these and prints out the value of the member variable of the integers created.
// (You will have to create a get method to do this appropriately.)


class Integer{
private:
    int a;
public:
    Integer(){
        a = 0;
    }
    Integer(Integer& param){
        return a = 0;
    }
    void copy_a(Integer& param){

    }
};

int main(){

    Integer in1, in2, in3, in4, in5;
    in1.set_a(1);
    in2.set_a(2);

    cout << in1.add(in1) << endl;
    cout << in2.add(in1, in2) << endl;

	return 0;
}
