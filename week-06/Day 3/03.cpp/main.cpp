#include <iostream>
#include <vector>

using namespace std;

// Create a Shape class, inherit two derived class from it
class Shape {

    protected:

        float area;
        float price;

    public:

        virtual float calc_area() = 0;

        float get_area(){
            return area;
        }

        float how_much_to_paint(){
            return area * price;
        }

        float set_price(float price){
            this->price = price;
        }

};

class Circle: public Shape{

    private:
        float radius;

    public:
        Circle(float radius){
            this->radius = radius;
            calc_area();
        }

        float calc_area(){
            area = 3.14 * radius * radius;
        }

};

class Triangle: public Shape{

    protected:
  //      int a;
    //    int b;

        float height;
        float base;

    public:
        Triangle(float height, float base){
    //        this-> a = a;
      //      this-> b = b;
            this-> height = height;
            this-> base = base;
            calc_area();
        }

        float calc_area(){
            area = base * height * 0.5;
        }

        float get_height(){
            return height;
        }

        float get_base(){
            return base;
        }
};
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside the class (so it is a private field)

int main()
{

    Circle cl = Circle(7);
    cl.get_area();

    cl.set_price(5);
    cout << "Paint " << cl.how_much_to_paint() << endl;

    Triangle tr = Triangle(10, 2);
    tr.set_price(5);
    cout << tr.get_area() << endl;

    cout << "Paint of the triangle is " << tr.how_much_to_paint() << endl;


    return 0;
}

// Continue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It shoud return the costs of the paingting
