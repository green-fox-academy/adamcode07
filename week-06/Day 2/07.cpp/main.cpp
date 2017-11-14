#include <iostream>
#include <string>

using namespace std;

class Pirate{
        int drinks;
        string a = "arrrr";
        string b = "Nothin'";

    public:
        Pirate (int drinks) {
            this->drinks = drinks;
        }

        int drink_rum(){
            return drinks;
        }

        string hows_going_mate(){
            if (drink_rum() >= 5){
                return a;
            } else {
                return b;
            }
        }
};

int main() {

    Pirate prt(2);

    cout << prt.hows_going_mate() << endl;
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  return 0;
}
