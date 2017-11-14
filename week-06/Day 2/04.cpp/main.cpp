#include <iostream>
#include <string>

using namespace std;


class House {
  private:
    string address;
    unsigned int area;

  public:
    House(string address, unsigned int area){
        this->address = address;
        this->area = area;
    }

    unsigned int get_price() {

      return 400 * area;
    }

    string get_address(){

        return address;
    }

//    get_price()
};

int main() {
  // The market price of the houses is 400 EUR / square meters
  // Make the get_price() function work
  // Create a constructor for the House class that takes it's address and area.
  House house("Andrassy 66", 349);

  cout << house.get_address() << " ara " << house.get_price();

  return 0;
}
