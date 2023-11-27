#include <stdio.h>

int main(void) {
    int N;
    float S;
        
    N = 1;
    printf("Δώτε έναν θετικό ακέραιο: ");
    scanf("%d", &N);

//    S = N / (2.00 * N - 1);
    

//    for (N = 1; N < 12; ++N) {
//        S = N / (2.00 * N - 1);
//    }
    while (N < 12) {
//    N = N + 1;
    S = N / (2.00 * N - 1);    
    printf("Το άθροισμα είναι: %1.2f \n", S);
    ++N;
    }
}