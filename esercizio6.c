#include <stdio.h>
#include <stdlib.h>
#include "trace.h" 

#define BUF 10


int operando1_[BUF] = {0};
int operando2_[BUF] = {0};
int risultato_[BUF] = {0};
char operazione_[BUF] = {'\0'};
int contatoreStorico = 0; 


void somma();
void moltiplicazione();
void differenza();
void divisione();
void potenzaOp();
void visualizzaStorico();

int main() {
    TRACE(); 
    int scelta;
    do {
        printf("\n--- Menu ---\n");
        printf("+ Somma (1)\n");
        printf("* Moltiplicazione (2)\n");
        printf("- Differenza (3)\n");
        printf("/ Divisione (4)\n");
        printf("^ Potenza (5)\n");
        printf("# Visualizza Storico (6)\n");
        printf("! Esci (7)\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: somma(); break;
            case 2: moltiplicazione(); break;
            case 3: differenza(); break;
            case 4: divisione(); break;
            case 5: potenzaOp(); break;
            case 6: visualizzaStorico(); break;
            case 7: printf("Uscita dal programma.\n"); break;
            default: printf("Opzione non valida! Riprova.\n");
        }
    } while (scelta != 7);

    return 0;
}


void somma() {
    TRACE();
    if (contatoreStorico >= BUF) {
        printf("Storico pieno, non è possibile registrare altre operazioni.\n");
        return;
    }
    int a, b, risultato;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    risultato = a + b;
    printf("Risultato: %d\n", risultato);

    // Aggiorna lo storico
    operando1_[contatoreStorico] = a;
    operando2_[contatoreStorico] = b;
    risultato_[contatoreStorico] = risultato;
    operazione_[contatoreStorico] = '+';
    contatoreStorico++;
}

void moltiplicazione() {
    TRACE();
    if (contatoreStorico >= BUF) {
        printf("Storico pieno, non è possibile registrare altre operazioni.\n");
        return;
    }
    int a, b, risultato;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    risultato = a * b;
    printf("Risultato: %d\n", risultato);

   
    operando1_[contatoreStorico] = a;
    operando2_[contatoreStorico] = b;
    risultato_[contatoreStorico] = risultato;
    operazione_[contatoreStorico] = '*';
    contatoreStorico++;
}

void differenza() {
    TRACE();
    if (contatoreStorico >= BUF) {
        printf("Storico pieno, non è possibile registrare altre operazioni.\n");
        return;
    }
    int a, b, risultato;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    risultato = a - b;
    printf("Risultato: %d\n", risultato);

    
    operando1_[contatoreStorico] = a;
    operando2_[contatoreStorico] = b;
    risultato_[contatoreStorico] = risultato;
    operazione_[contatoreStorico] = '-';
    contatoreStorico++;
}

void divisione() {
    TRACE();
    if (contatoreStorico >= BUF) {
        printf("Storico pieno, non è possibile registrare altre operazioni.\n");
        return;
    }
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        float risultato = (float)a / b;
        printf("Risultato: %.2f\n", risultato);

        
        operando1_[contatoreStorico] = a;
        operando2_[contatoreStorico] = b;
        risultato_[contatoreStorico] = (int)risultato;
        operazione_[contatoreStorico] = '/';
        contatoreStorico++;
    } else {
        printf("Errore: divisione per zero!\n");
    }
}

void potenzaOp() {
    TRACE();
    if (contatoreStorico >= BUF) {
        printf("Storico pieno, non è possibile registrare altre operazioni.\n");
        return;
    }
    int base, esponente, risultato = 1;
    printf("Inserisci la base e l'esponente: ");
    scanf("%d %d", &base, &esponente);

    for (int i = 0; i < esponente; i++) {
        risultato *= base;
    }
    printf("Risultato: %d\n", risultato);

    
    operando1_[contatoreStorico] = base;
    operando2_[contatoreStorico] = esponente;
    risultato_[contatoreStorico] = risultato;
    operazione_[contatoreStorico] = '^';
    contatoreStorico++;
}

void visualizzaStorico() {
    TRACE();
    printf("\n--- Storico Operazioni ---\n");
    for (int i = 0; i < contatoreStorico; i++) {
        printf("Operazione %d: %d %c %d = %d\n",
               i + 1, operando1_[i], operazione_[i], operando2_[i], risultato_[i]);
    }
    if (contatoreStorico == 0) {
        printf("Nessuna operazione registrata.\n");
    }
}

