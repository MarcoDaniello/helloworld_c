#include<stdio.h>
#define pi 3.14159
int main()
{

int r;
int c;
int s;

printf("Inserisci il valore del raggio: \n");
scanf("%d", &r);


c = 2*r*pi;
s = pi*(r*r);


printf("La circonferenza misura:  %d\n", c);
printf("La superficie misura:  %d\n", s);



return 0;
}



