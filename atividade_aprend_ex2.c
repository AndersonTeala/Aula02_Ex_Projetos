#include <stdlib.h>
#include <stdio.h>
int main (void)
{
int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);

if(num%2 == 0){
{
    num = num/2;
    printf("Numero par dividido por 2", num);
    printf ("\n resultado de n é: %2.f\n", num);
}

}

else{
    if(num%2 != 0)
{
    num = num*3+1;
    printf("Numero impar multiplicado por 3 mais 1", num);
    printf ("\n resultado de n é: %2.f\n", num);
}

}

}