#include<stdio.h>
int main()
{

int a;
int b;


printf("Inserisci il primo numero\n");
scanf("%d", &a);
printf("Inserisci il secondo numero\n");
scanf("%d",&b);

if(a>b)
{
printf("Il maggiore e': %d\n" , a);
}
else{

printf("Il maggiore e': %d\n" , b);
}

return 0;
}
