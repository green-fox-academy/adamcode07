#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>


using namespace std;

class Student{

    private:
        int grade;
        int size_v;
        vector <int> myVector;

    public:
        Student() {
            //this->grade = grade;

        }

        void add_grade(){
            unsigned int i = 0;
            size_v = 5;

            for (i = 0; i < size_v; i++)
                myVector.push_back(rand() % 5 + 1);
                //cout << grade[i];

            for (i = 0; i < size_v; i++)
                cout << myVector[i] << endl;

            //return 0;
        }

        float get_average(){
            int i;
            float sum;
            float avg;

            for (i = 0; i < size_v; i++){
                sum += (float)myVector[i];
            }
            avg = sum / (float)size_v;

            return avg;
        }


};

int main() {

    srand(time(NULL));

    Student st;

    st.add_grade();

    cout << endl << "The avg is " << st.get_average() << endl;
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

  return 0;
}
