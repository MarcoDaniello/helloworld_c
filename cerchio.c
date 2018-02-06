#include<stdio.h>

int main()
{

int r;
int c;
int s;

printf("Inserisci il valore del raggio: \n");
scanf("%d", &r);


c = 2*r*3.14;
s = 3.14*(r*r);


printf("La circonferenza misura:  %d\n", c);
printf("La superficie misura:  %d\n", s);



return 0;
}



