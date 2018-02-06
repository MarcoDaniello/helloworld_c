#include<stdio.h>
int main()
{

int a;
int b;
int maggiore;



printf("Inserisci il primo numero\n");
scanf("%d", &a);
printf("Inserisci il secondo numero\n");
scanf("%d",&b);

maggiore = a;

if(b>maggiore)
{

maggiore = b;

}


printf("Il numero maggiore e': %d", maggiore);


return 0;
}
