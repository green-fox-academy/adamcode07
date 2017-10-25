#include <stdio.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};
void carprinter();

typedef struct Car {
  enum CarType type;
  double km;
  double gas;
} CAR;
void carprinter(CAR car);

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {
//    struct Computer computer1 = {3.2, 8, 32};
    CAR vo = {VOLVO, 33, 131};
    CAR to = {TOYOTA, 23, 111};
    CAR la = {LAND_ROVER, 15, 70};
    CAR te = {TESLA, 17, 50};

    int cartype = 0;
    printf("type:");
    scanf("%d", &cartype);

    switch(cartype){
        case 1:
            carprinter(vo);
            break;
        case 2:
            carprinter(to);
            break;
        case 3:
            carprinter(la);
            break;
        case 4:
            carprinter(te);
            break;
        default:
            printf("not valid");
    }

  return 0;
}

void carprinter(CAR car)
{
    printf("Km: %.lf\n", car.km);
    if(car.type != TESLA)
    printf("Gas: %.lf\n", car.gas);
}
