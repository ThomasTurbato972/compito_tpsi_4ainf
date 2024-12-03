include <stdio.h>
#include "math.h" 

int main() {
    int num1, num2;
    float num3, num4;
    int result_int;
    float result_float;

   
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    result_int = somma(num1, num2);
    printf("La somma tra %d e %d è: %d\n", num1, num2, result_int);

   
    result_int = differenza(num1, num2);
    printf("La differenza tra %d e %d è: %d\n", num1, num2, result_int);

    result_int = moltiplicazione(num1, num2);
    printf("La moltiplicazione tra %d e %d è: %d\n", num1, num2, result_int);

    printf("Inserisci il primo numero float: ");
    scanf("%f", &num3);
    printf("Inserisci il secondo numero float: ");
    scanf("%f", &num4);

    result_float = divisione(num3, num4);
    if (num4 != 0) {
        printf("La divisione tra %.2f e %.2f è: %.2f\n", num3, num4, result_float);
    }

    return 0;
}
