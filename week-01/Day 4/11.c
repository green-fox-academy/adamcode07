#include <stdio.h>

int main(){

    for (int i = 1; i <= 100; i++) {
        switch (i % 15) {
            case 0:
                printf("FizzBuzz\n");
                continue;
        }
        switch (i % 3) {
            case 0:
                printf("Fizz\n");
                continue;
        }
        switch (i % 5) {
            case 0:
                printf("Buzz\n");
                continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
