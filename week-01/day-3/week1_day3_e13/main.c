#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint8_t x = 0b11001100;
    uint8_t y = 0b01010101;
	uint8_t z = x & y;
    uint8_t zz = x | y;
	printf("%d\n" , z);
    printf("%d" , zz);
	// Be z equal to the bitwise and of x and y

	// Check the result with printf

	// Be z equal to the bitwise or of x and y

	// Check the result with printf
    return 0;
}
