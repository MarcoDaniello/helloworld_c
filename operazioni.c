#include<stdio.h>

int main(){

int a;
int b;
int somma;
int sottrazione;
int moltiplicazione;
int divisione;


printf("Inserisci il primo numero ");
scanf("%d",&a);
printf("Inserisci il secondo numero ");
scanf("%d",&b);


somma = a+b;
sottrazione = a-b;
moltiplicazione = a*b;
divisione = a/b;

printf("La somma vale: %d\n", somma );
printf("La sottrazione vale: %d\n", sottrazione );
printf("La moltiplicazione vale: %d\n", moltiplicazione );
printf("La divisione vale: %d\n", divisione);


return 0;
}
