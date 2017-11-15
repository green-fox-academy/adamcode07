#include <iostream>
#include <vector>

using namespace std;

// Create a Shape class, inherit two derived class from it
class Shape {

    protected:

        float area;
        int price;

    public:

        virtual float calc_area() = 0;

        float get_area(){
            return area;
        }

        int get_paint(){
            return price;
        }

        virtual float how_much_to_paint(int price) = 0;

};

class Circle: public Shape{

    private:
        int radius;

    public:
        Circle(int radius){
            this->radius = radius;
        }

        float calc_area(){
            area = 3.14 * (float)radius * (float)radius;
            return area;
        }

        float how_much_to_paint(int price){
            return area * price;
        }

};

class Triangle: public Shape{

    protected:
        int a;
        int b;

        int height;
        int base;
        float area;

    public:
        Triangle(int height, int base){
            this-> a = a;
            this-> b = b;
            this-> height = height;
            this-> base = base;
            this-> area = area;

            this-> price = price;
        }

        float calc_area(){
            area = base * height * 0.5;
            return area;
        }
        int get_height(){
            return height;
        }
        int get_base(){
            return base;
        }

        int get_area(){
            return area;
        }

        float how_much_to_paint(int price){
            return area * price;
        }

};
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside the class (so it is a private field)

int main()
{
    Circle cl(5);
    cl.get_area();

    cl.get_paint();
    cout << "The circle's area is " << cl.how_much_to_paint(4) << endl;

    Triangle tr(10, 4);
    tr.get_area();
    tr.get_height();
    tr.get_base();
    tr.get_area();

    tr.get_paint();
    cout << "The triangle's area is " << tr.how_much_to_paint(11) << endl;

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
