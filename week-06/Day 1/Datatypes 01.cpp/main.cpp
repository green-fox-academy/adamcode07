#include <iostream>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{

    int daily_coding = 6;
    int semester_length = 17;

    int student_total = 0;
    student_total = daily_coding * (semester_length + 5);

    cout << student_total << endl << endl;

    float percentage = 0;
    int weekly_work_h = 52;

    percentage = (float)student_total / weekly_work_h;

    cout << percentage << endl;

    return 0;
}
