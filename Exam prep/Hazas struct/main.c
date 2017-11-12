#include <stdio.h>
#define MARKET_PRICE 400

// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

struct house {

    char address[20];
    int price;
    int number_of_rooms;
    int area;

};
// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
int home_evaluator(struct house *h);
int value_deal_counter(struct house *h, int len);

int main() {

  struct house House[] = {

    {"Soroksar", 10000, 3, 75},
    {"Wekerle", 8000, 2, 50},
    {"Szszm", 75000, 2, 55},
    {"Sasad", 45000, 2, 45},
    {"Bugyi", 10500, 3, 65},

  };

  int len = sizeof(House)/sizeof(House[0]);

  //printf("%s is %s\n", House[0].address, home_evaluator(House));
  //printf("%s is %s\n", House[1].address, home_evaluator(House));

  printf("There are %d houses worth to buy\n", value_deal_counter(House, len));

  int i = 0;
  for (i = 0; i < len; i++)
  {
      if (home_evaluator(&House[i]) == 1)
      {
          printf("Buy it %d\n", i + 1);
      } else {
          printf("Don't buy it\n", i + 1);
      }
  }

  return 0;
}

int home_evaluator(struct house *h)
{
    int i = 0;

    //for (i = 0; i < len; i++)
    {
    if ( MARKET_PRICE > (h->price / h->area))
        {
            return 1;
        } else {
            return 0;
        }
    }
}

int value_deal_counter(struct house *h, int len)
{
    int i = 0;
    int house_counter = 0;

    for (i = 0; i < len; i++)
    {
        if ((h[i].price/ h[i].area) < MARKET_PRICE)
        {
            house_counter++;
        }
    }
    return house_counter;
}
