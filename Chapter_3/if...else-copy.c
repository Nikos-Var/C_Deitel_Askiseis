#include <stdio.h>

int main() {
	int grade;

	printf("Input grade: \n");
	scanf("%d", &grade);

	printf(grade >= 60 ? "Passed!\n" : "Failed.\n");
	
	return 0;
}