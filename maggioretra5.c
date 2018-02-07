#include<stdio.h>

int main()
{

int a;
int b;
int c;
int d;
int e;
int m;

printf("Inserisci il primo numero\n");
scanf("%d", &a);

printf("Inserisci il secondo numero\n");
scanf("%d", &b);

printf("Inserisci il terzo numero\n");
scanf("%d", &c);

printf("Inserisci il quarto numero\n");
scanf("%d", &d);

printf("Inserisci il quinto numero\n");
scanf("%d", &e);

m = a;

if(b>m){
m = b;
}

if (c>m){
m = c;
}

if(d>m){
m = d;
}

if(e>m){
m = e;
}

printf("Il mumero maggiore è %d\n ", m);


return 0;
}
