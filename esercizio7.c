#include <stdio.h>
#include <stdlib.h>
#include "pow.h"
#include "race.h"

void somma();
void moltiplicazione();
void differenza();
void divisione();
void potenzaOp();
void logger();

int main() {
    TRACE();
    int scelta;
    do {
        printf("\nMenu\n");
        printf("+ Somma (1)\n");
        printf("* Moltiplicazione (2)\n");
        printf("- Differenza (3)\n");
        printf("/ Divisione (4)\n");
        printf("^ Potenza (5)\n");
        printf("# Logger (6)\n");
        printf("! Esci (7)\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: somma(); break;
            case 2: moltiplicazione(); break;
            case 3: differenza(); break;
            case 4: divisione(); break;
            case 5: potenzaOp(); break;
            case 6: logger(); break;
            case 7: printf("Uscita dal programma.\n"); break;
            default: printf("Opzione non valida!\n");
        }
    } while (scelta != 7);

    return 0;
}

void somma() {
    TRACE(); 
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    printf("Risultato: %d\n", a + b);
}

void moltiplicazione() {
    TRACE(); 
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    printf("Risultato: %d\n", a * b);
}

void differenza() {
    TRACE(); 
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    printf("Risultato: %d\n", a - b);
}

void divisione() {
    TRACE(); 
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Risultato: %.2f\n", (float)a / b);
    } else {
        printf("Errore: divisione per zero!\n");
    }
}

void potenzaOp() {
    TRACE(); 
    int base, esponente;
    printf("Inserisci la base e l'esponente: ");
    scanf("%d %d", &base, &esponente);
    printf("Risultato: %d\n", potenza(base, esponente));
}

void logger() {
    TRACE(); 

