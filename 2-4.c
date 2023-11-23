// Υπολογίζουμε το γινόμενο τριών ακεραίων

#include <stdio.h>

int x, y, z, result;

int main() {
    printf("Εισάγετε τρεις ακεραίους: \n");
    scanf("%d%d%d", &x, &y, &z);
    result = x * y * z;
    printf("Το αποτέλεσμα του πολλαπλασιαμού των τριών αριθμών είναι: %d\n", result);

}


