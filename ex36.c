#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_generato, numero_indovinato, punteggio = 0;
    
    srand(time(NULL));
    
    numero_generato = rand() % 100 + 1;
    
    while (1) {
        printf("Indovina il numero tra 1 e 100: ");
        scanf("%d", &numero_indovinato);
        
        if (numero_indovinato == numero_generato) {
            printf("Hai indovinato! Il numero era %d\n", numero_generato);
            punteggio++;
            break;
        } else if (numero_indovinato < numero_generato) {
            printf("Il numero da indovinare è più grande di %d\n", numero_indovinato);
        } else {
            printf("Il numero da indovinare è più piccolo di %d\n", numero_indovinato);
        }
        
        punteggio++;
    }
    
    printf("Hai totalizzato %d punti\n", punteggio);
    
    return 0;
}