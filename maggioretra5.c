#include<stdio.h>

int main()
{

int a;
int b;
int c;
int d;
int e;

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


if(a>b && a>c && a>d && a>e){

printf("Il maggiore e': %d\n", a);
}
else if (b>a && b>c && b>d && b>e){
printf("IL maggiore e': %d\n", b);
}
else if (c>a && c>b && c>d && c>e){
printf("Il maggiore e': %d\n", c);
}
else if (d>a && d>b && d>c && d>e){
printf("Il maggiore e': %d\n", d);
}
else
{
printf("Il maggiore e': %d\n", e);
}


return 0;
}
 
