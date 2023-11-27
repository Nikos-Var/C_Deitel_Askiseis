#include <stdio.h>

int main() {
	int product;
	printf("product: \n");
	scanf("%d", &product);
	
	product = 3;
	while (product <= 100) {
		product = 3 * product;
	}
	printf("%d\n", product);
	
	
	return 0;
}