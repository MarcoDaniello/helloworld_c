#include<stdio.h>

int main(){

int c1,c2,c3;
int a;
int s;

printf("Inserisci un numero di 3 cifre\n");
scanf("%d",&a);

if(a<0 || a>999){

printf("Devi inserire un numero di 4 cifre!\n");
}

else {

c1 = a%10;
a = a/10;

c2 = a%10;
a = a/10;

c3 = a%10;
a = a/10;

}

s = c1+c2+c3;

printf("La somma è %d\n", s);

return 0;

}
