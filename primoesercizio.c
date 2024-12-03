#include <stdio.h>

// Funzione per la somma di due interi
int somma(int a, int b) {
    return a + b;
}

// Funzione per la differenza tra due interi
int differenza(int a, int b) {
    return a - b;
}

// Funzione per la moltiplicazione di due interi
int moltiplicazione(int a, int b) {
    return a * b;
}

// Funzione per la divisione di due float
float divisione(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Errore: Divisione per zero.\n");
        return 0.0f; // Restituisce un valore di 
