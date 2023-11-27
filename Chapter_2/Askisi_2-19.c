/*  Λύση άσκησης 2.19, σελ. 66
    Άθροισμα, Μέσος όρος, Γινόμενο, Μιρκότερος, Μεγαλύτερος
*/

#include <stdio.h>

int x, y, z, smallest, largest;

int main (void) {
    printf("Δώστε τρεις διαφορετικούς ακεραίους: \n");
    scanf("%d%d%d", &x, &y, &z);

    printf("Το άθροισμα είναι: %d\n", x + y + z); // Άθροισμα

    printf("Ο μέσος όρος είναι: %d\n", ((x+y+z)/3)); // Μέσος όρος

    printf("Το γινόμενο είναι: %d\n", x * y * z); // Γινόμενο

    smallest = x;

    if (y < smallest){
        smallest = y;
    }
    if (z < smallest) {
        smallest = z;
    }
    printf("Ο μικρότερος είναι ο %d\n", smallest);
    
    largest = x;

    if (y > largest){
        largest = y;
    }
    if (z > largest) {
        largest = z;
    }
    printf("Ο μεγαλύτερος είναι ο %d\n", largest);
}
