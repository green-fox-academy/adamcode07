#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t ae = 4;
	// print "yeeeeeeeey" ae times

	do {
        ae -=1;
	printf("yeeeeeeeey\n", ae);
	} while (ae > 0);

	return 0;
}
