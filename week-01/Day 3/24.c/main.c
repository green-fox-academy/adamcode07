#include <stdio.h>
#include <stdlib.h>

/*
Create a program which converts days to years, months, weeks and days
to keep it simple we say every year is 365 days long, every month is 30 days
*/

int main()
{
    int days = 3243;

    int years, months, weeks;

    years = days / 365;

    months = days / 30;

    weeks = days / 7;

    days = days;

    printf("%d, %d, %d, %d", years, months, weeks, days);

    return 0;
}
