#include <stdio.h>
#include <stdint.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

int main() {
    struct Computer computer1 = {3.2, 8, 32};

    //TODO: Change the bits to 64
//    struct Computer *struct_pointer;
//    struct_pointer = &computer;
    computer1.bits = 64;

    //TODO: print out the structure members

    printf( "CPU speed : %f\n", computer1.cpu_speed_GHz);
    printf( "CPU speed : %d\n", computer1.ram_size_GB);
    printf( "CPU speed : %d\n", computer1.bits);

    //printf( "CPu speed : %s\n", cpu_speed_GHz);
//    printf( &computer );
//    printf("cpu speed is %d\n", Computer{});
//    printf("%d %d %d", sizeof(cpu_speed_GHz.computer), sizeof(ram_size_GB.computer), sizeof(bits.computer), sizeof(computer));
//    Computer c1;
//    c1 = (Computer){.id = id, .name = name, .score = score};
//    shareedit


    return 0;
}
