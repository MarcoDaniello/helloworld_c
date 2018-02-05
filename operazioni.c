#include<stdio.h>

int main(){

int a;
int b;
int somma;
int sottrazione;
int moltiplicazione;
int divisione;
int resto;

printf("Inserisci il primo numero ");
scanf("%d",&a);
printf("Inserisci il secondo numero ");
scanf("%d",&b);


somma = a+b;
sottrazione = a-b;
moltiplicazione = a*b;
divisione = a/b;
resto = a%b;
printf("La somma vale: %d\n", somma );
printf("La sottrazione vale: %d\n", sottrazione );
printf("La moltiplicazione vale: %d\n", moltiplicazione );
printf("La divisione vale: %d\n", divisione);
printf("Il resto e': %d\n", resto);


return 0;
}
