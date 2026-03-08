/**
 *  BITWISE OPERATIONS LOW LEVEL RAAWRRR
 * | OR: AT LEAST ONE BIT SHOULD BE 1 ((0 | 1 = 1)  (1 | 1 = 1))
 * & AND: ALL BITS SHOULD BE 1 (1 & 1 = 1)
 * ^ XOR: ONLY ONE BIT CAN BE 1 (1 ^ 0 = 1)
 * ~ NOT: REVERSE BITS (0 = 1)
 */

#include <stdio.h>

int x = 6; // 6 = 0000 0110
int y = 4; // 4 = 0000 0100
int z = 0; // 0 = 0000 0000


int main(){
    { // Useful for Robotic programming and pretty much anything
        // Change the variable x 5th bit to 1 (0010 0110 = 38)
        // This is how I would change the state of a pin to HIGH while keeping others the same:
        z = x | (1 << 5); //mask: 0010 0000
        printf("AFTER OPERATION 1 = %d\n", z);
        // Change the variable x 1st bit to 0 (0000 0100 = 4)
        // This how I would change the state of a pin to LOW while keeping others the same:
        z = x & ~(1 << 1); //mask: 1111 1101
        printf("AFTER OPERATION 2 = %d\n", z);
        // Reverse the variable x 2nd bit
        // This is how I would reverse a state of a pin
        z = x ^ (1 << 2); //mask: 0000 0100
        printf("AFTER OPERATION 3 = %d\n", z);
        // Now Ireverse it again
        z ^= (1 << 2); //mask: 0000 0100
        printf("AFTER OPERATION 4 = %d\n", z);
        /**
         * I can also revert state of a pin using PINC = (1 << 5);
         * but since this is a very Atmega328P chip thing, it will likely not work everywhere
         * however it takes one CPU clock cycle to change the state so I could prefer that in some SPECIFIC projects
         */
    }
    { // too lazy
        // to continue
    }
}