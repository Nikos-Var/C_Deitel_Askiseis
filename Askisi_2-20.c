/*  Λύση άσκησης 2.20, σελ. 67
    Διάμετρος, Περίμετρος, εμβαδόν κύκλου
    */

#include <stdio.h>
int main (void) {
    int aktina;

    printf("Δώστε την ακτίνα του κύκλου: \n", aktina);
    scanf("%d", &aktina);

    printf("Διάμετρος = %d \n", 2 * aktina);
    printf("Περίμετρος = %f \n", 2 * 3.14159 * aktina);
    printf("Εμβαδόν = %f \n", 3.14159 * aktina * aktina);

}