#include <stdio.h>

int main(){
    int integer1; // Ο πρώτος αριθμός που εισάγεται από το χρήστη
    int integer2; // Ο 2ος αριθμός
    int sum; // Η μεταβλητή στην οποία θα αποθηκευθεί το άθροισμα

    printf("Δώστε τον πρώτο ακέραιο: ");
    scanf("%d", &integer1); // Διαβάζει τον ακέραιο

    printf("Δώστε το δεύτερο ακέραιο: ");
    scanf("%d", &integer2); // Διάβασε το 2ο ακέραιο

    sum = integer1 + integer2; // Το άθροισμα των 2 ακεραίων

    printf("Το σύνολο των δύο ακεραίων είναι: %d\n", sum);

    return 0;
}