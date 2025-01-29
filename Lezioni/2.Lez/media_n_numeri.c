#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Inserisci il numero di numeri che vuoi inserire:");
    scanf("%d", &n);

    int cont = 0;

    int somma = 0; //qui non va bene

    while(cont < n) {
        cont = cont + 1;

        int numero;
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        somma = somma + numero;
    }

    printf("La media dei numeri inseriti è: %f \n", (float)somma/n);
    return 0;
}