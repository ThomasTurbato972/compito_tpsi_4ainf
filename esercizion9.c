#include <stdio.h>
#include "trace.h"  

extern int operando1_[10];  
extern int operando2_[10];
extern int risultato_[10];
extern char operazione_[10];
extern int contatoreStorico;  

void logger(int iterazioni) {
    TRACE();  

    if (iterazioni > contatoreStorico) {
        printf("Errore: il numero di iterazioni richiesto è maggiore del numero di operazioni eseguite.\n");
        return;
    }

    printf("\n--- Storico Operazioni ---\n");

    
    for (int i = 0; i < iterazioni; i++) {
        printf("Operazione %d: %d %c %d = %d\n", 
               i + 1, 
               operando1_[i], 
               operazione_[i], 
               operando2_[i], 
               risultato_[i]);
    }

    if (iterazioni == 0) {
        printf("Nessuna operazione eseguita.\n");
    }
}

