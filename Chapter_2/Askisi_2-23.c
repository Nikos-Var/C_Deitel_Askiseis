/*  Λύση άσκησης 2.23, σελ. 67
    Μέγιστοι και ελάχιστοι
*/

#include <stdio.h>

int main() {
	int x, y, z, megistos, elaxistos;

	printf("Δώστε τρεις ακεραίους: \n");
	scanf("%d %d %d", &x, &y, &z);

	megistos = x;
	if (y > megistos){
		megistos = y;
	}
	if (z > megistos){
		megistos = z;
	}
	printf("Ο μέγιστος αριθμός είναι ο: %d\n", megistos);

	elaxistos = x;
	if (y < elaxistos) {
		elaxistos = y;
	}
	if (z < elaxistos) {
		elaxistos = z;
	}
	printf("Ο μικρότερος αριθμός ειναι ο: %d\n", elaxistos);
}