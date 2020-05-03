#include <stdlib.h>
#include <stdio.h>
int main (void)
{
int n;
printf("digite um numero inteiro: ");
scanf("%d",&n);

if(n%2 == 0){
{
    n = n/2;
    printf("Numero par dividido por 2", n);
    printf ("\n resultado de n é: %2.f\n", n);
}

}

else{
    if(n%2 != 0)
{
    n = n*3+1;
    printf("Numero impar multiplicado por 3 mais 1", n);
    printf ("\n resultado de n é: %2.f\n", n);
}

}

}