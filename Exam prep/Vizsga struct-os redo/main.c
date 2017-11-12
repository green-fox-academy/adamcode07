#include <stdio.h>
#include <stdlib.h>

typedef enum {
    elementary_school,
    high_school,
    bsc_degree,
    master_degree,
    phd

} qualification_t;

struct person {

    char name[10];
    int birth_year;
    qualification_t qualification;

};

int get_oldest_alive(struct person *p, int len);

int get_qualification_count(struct person *p, int len, qualification_t qualification);


int main()
{
    struct person Person[] = {

        {"Adam", 1984, phd},
        {"Gergo", 1982, bsc_degree},
        {"Oszkar", 1990, high_school},
        {"Sanyi", 1900, phd},

    };

    int len = sizeof(Person)/sizeof(Person[0]);
    printf("%d\n", len);

    printf("The oldest person is %d years old\n", get_oldest_alive(Person, len));
    printf("People with 'quali' qualification: %d\n", get_qualification_count(Person, len, phd));

    return 0;
}

int get_oldest_alive(struct person *p, int len)
{
    int current_year = 2017;
    int oldest_max = 0;
    //int oldest_index = 0;

    int i = 0;
    for (i = 0; i < len; i++)
    {
        if ((current_year - p[i].birth_year) > oldest_max) //age > oldest_max
        {
            oldest_max = current_year - p[i].birth_year; //oldest_max = age
        }
        //printf("%d", oldest_max);
        //oldest_index = i;
    }

    return oldest_max;
    //return (current_year - p[oldest_index].birth_year);
}

int get_qualification_count(struct person *p, int len, qualification_t qualification)
{
    int ppl_counter = 0;

    for (int i = 0; i < len; i++)
    {
        if (p[i].qualification == phd)
        {
            ppl_counter++;
        }
    }
    return ppl_counter;
}
