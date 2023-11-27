#include <stdio.h>

int main() {
	int grade;

	printf("Input grade: ");
	scanf("%d", &grade);

	if (grade >= 60) {
		printf("Passed!\n");
	}
	else {
		printf("Failed.\n");
	}
	
	return 0;
}