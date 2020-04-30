#include <stdlib.h>
#include <stdio.h>
int main (void)
{
int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);

if(num<0){
    if(num%2==0)//operador %
{
printf("NEGATIVO Par");
}
else
printf("NEGATIVO Ímpar");
}

else{
    if(num%2==0)//operador %
{
printf("POSITIVO Par");
}
else
printf("POSITIVO Ímpar");
}

}