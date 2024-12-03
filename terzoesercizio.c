#include <stdio.h>

int potenza(int base, int esponente) {
    int risultato = 1;  

    if (esponente < 0) {
        printf("Errore: l'esponente non può essere negativo.\n");
        return -1; 
    }

    for (int i = 0; i < esponente; i++) {
        risultato= base; 
    }

    return risultato;
}



