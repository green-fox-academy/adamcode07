#include <stdio.h>
#include <stdlib.h>

typedef enum {BAD_BEHAVIOR, GOOD_BEHAVIOR} behavior_t;

struct student {

    char name[20];
    int grade;
    behavior_t behaviors;

};

float avg_grade(struct student *s, int len);

char plz_behave_good(struct student *s, int len);

int good_behav_counter(struct student *s, int len);

int main()
{
    struct student students[] = {

        {"Adam", 4, BAD_BEHAVIOR},
        {"Gergo", 3, BAD_BEHAVIOR},
        {"Annamari", 4, GOOD_BEHAVIOR},
        {"Norbi", 4, GOOD_BEHAVIOR},
        {"Zoli", 5, GOOD_BEHAVIOR},
        {"Gabor", 5, BAD_BEHAVIOR},

    };

    int len = sizeof(students)/sizeof(students[0]);
    //printf("%d", len);
    int n = 0;

    printf("The avg grade of the students is %.3f\n", avg_grade(students, len));
    plz_behave_good(students, len);
    printf("The number of good students with 5 grades: %d", good_behav_counter(n));

    return 0;
}

float avg_grade(struct student *s, int len)
{
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < len; i++)
    {
        sum += s[i].grade;
    }
    avg = (float)sum / len;

    return avg;
}

char plz_behave_good(struct student *s, int len)
{
    int good_student_counter = 0;
    int bad_but_smart_index = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i].grade > 3 && s[i].behaviors == BAD_BEHAVIOR)
        {
        good_student_counter = s[i].name;
        bad_but_smart_index = i;
        printf("%s you are fuckin amazing, please behave good\n", s[bad_but_smart_index].name);
        }
    }
    return 0;
}

int good_behav_counter(struct student *s, int len)
{
    int counter = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i].grade == 5 && s[i].behaviors == GOOD_BEHAVIOR);
        counter++;
    }


    return counter;
}

//TODO:
//Create a structure called "student":
//name of the student
//number of the student's grade - error handling
//type of the student's behavior in an enumeration ("behaviors"): - BAD_BEHAVIOR , GOOD_BEHAVIOR
//The student's are stored in an array.
// Write a function that returns with the grade's average
// write a function that prints out if the student's grade higher than 3 and the behavior is bad:
//"(student's name) you are fuckin amazing, please behave good"
//write a function that counts good behaviors, if they have 5 grades:
//return with the count of students
