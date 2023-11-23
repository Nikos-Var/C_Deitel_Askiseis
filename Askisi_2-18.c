// Λύση άσκησης 2.18, σελ. 66

#include <stdio.h>

int x, y;

int main (void) {
    printf("Δώστε δύο ακεραίους αριθμούς: \n");
    scanf("%d%d", &x, &y);

    if (x > y) {
        printf("Ο αριθμός %d είναι μεγαλύτερος\n", x);
    }
    if (y > x) {
        printf("Ο αριθμός %d είναι μεγαλύτερος \n", y);
    }
    if (y == x) {
        printf("Οι αριθμοί είναι ίσοι \n");
    }
}