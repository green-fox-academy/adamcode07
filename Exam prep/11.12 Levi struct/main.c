#include <stdio.h>
#include <stdlib.h>

typedef enum {

    NOVEL,
    BOOK,
    PAPER,
    POEM

} genre_t;

struct book {

    char title[20];
    char author[20];
    int year_of_publication;
    genre_t genre;

};

int print_year_of_publication (struct book *b, int len);

int get_oldest_of_a_type (struct book *b, int len, genre_t gen);

int change_year_of_publication (struct book *b, int len, int num);

int main()
{

    struct book books[] = {

        {"Egri chillagok", "GG", 1888, 0},
        {"The secret", "Szekta Sam", 2000, 0},
        {"Harry Potter", "J.K.R.", 2001, 1},
        {"Pal Utcai Fiuk", "Molnar Ferenc", 1507, 0},
        {"Dr House", "Mr House", 1998, 0},
        {"Friends", "LL Cool J", 2002, 3},

    };

    int len = sizeof(books)/sizeof(books[0]);

    print_year_of_publication (books, len);
    //printf("%s yr of publication %d", book[0].title ,print_year_of_publication (books, len);
    printf("\n\nThe oldest NOVEL is %d yrs old\n", (get_oldest_of_a_type (books, len, NOVEL)));

    printf("\nUpdated yr of publication is %d\n", change_year_of_publication (books, len, 2016));

    return 0;
}

int print_year_of_publication (struct book *b, int len)
{
    int i = 0;

    for (i = 0; i < len; i++)
    {
        printf("%s yr of publication %d\n", b[i].title ,b[i].year_of_publication);
    }
}

int get_oldest_of_a_type (struct book *b, int len, genre_t gen)
{
    int i = 0;
    int oldest_book = 0;
    int old_index = 0;
    int current_yr = 2017;

    for (i = 0; i < len; i++)
    {
        if (oldest_book < (current_yr - b[i].year_of_publication) && b[i].genre == NOVEL)
        {
            oldest_book = current_yr - b[i].year_of_publication;
            old_index = i;
        }
    }
    //return (2017 - b[old_index].year_of_publication);
    return oldest_book;
}

int change_year_of_publication (struct book *b, int len, int num)
{
    b[1].year_of_publication = num;
    //printf("%d", b[1].year_of_publication);
}

//title, author, yr of publication,
//enum - novel, book, paper, poem

//print_year_of_publication
//get_oldest_of_a_type
//change_year_of_publication
