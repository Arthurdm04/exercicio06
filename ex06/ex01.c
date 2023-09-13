#include<stdio.h>

int main(){
/*
Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

61 - Brasília 

71 - Salvador 

11 - São Paulo 

21 - Rio de Janeiro 

32 - Juiz de Fora 

19 - Campinas 

27 - Vitória 

31 - Belo Horizonte 
*/

int telefone;

printf("Digite o DDD correspondente a cidade desejada:");
scanf("%i", &telefone);

switch (telefone)
{
case 61:
printf("Esse DDD corresponde a cidade de Brasilia.\n");
break;

case 71:
printf("Esse DDD corresponde a cidade de Salvador.\n");
break;

case 11:
printf("Esse DDD coresponde a cidade de São Paulo.\n");
break;

case 21:
printf("Esse DDD corresponde a cidade Rio de Janeiro.\n");
break;

case 32:
printf("Esse DDD corresponde a Juiz de Fora.\n");
break;

case 19:
printf("Esse DDD corresponde a Campinas.\n");
break;

case 27:
printf("Esse DDD corresponde a Vitoria.\n");
break;

case 31:
printf("Esse DDD corresponde a Belo Horizonte.\n");
break;

default:
printf("DDD nao identificado.\n");
break;

}

}