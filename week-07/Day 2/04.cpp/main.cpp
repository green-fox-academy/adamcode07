#include <iostream>
using namespace std;

// Create a Class named Integer. It should have one int member variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the member variable of this.
//
// Try them out. Write code that demonstrates how they work.
class Integer{
private:
    int a;
public:
    void set_a(int a){
        this->a = a;
    }

    int add(Integer& param){
        return a;
    }

    int add(Integer& param, Integer& param1){
        return a + param1.a;
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
