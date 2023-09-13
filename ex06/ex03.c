#include<stdio.h>

int main(){
/*
Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). 

Enumere cada opção de prato, sobremesa e bebida.

Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne;

Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;

Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet. 
*/

int prato, bebida, sobremesa, totalCal;

printf("Escolha o numero do prato:\n1 - vegetariano\n2 - peixe\n3 - frango\n4 - carne\n");
scanf("%i", &prato);

printf("Escolha o numero da sobremesa:\n1 - abacaxi\n2 - sorvete diet\n3 - mouse diet\n4 - mouse chocolate\n");
scanf("%i", &sobremesa);

printf("Escolha o numero da bebida:\n1 - cha\n2 - suco laranja\n3 - suco melao\n4 - refrigerante diet\n");
scanf("%i", &bebida);

switch (prato)
{
case 1:
prato = 180;
break;

case 2: 
prato = 230;
break;

case 3:
prato = 250;
break;

case 4:
prato = 350;
break;

default:
printf("Prato invalido.\n");
break;

}

switch (sobremesa)
{
case 1:
sobremesa = 75;
break;

case 2:
sobremesa = 110;
break;

case 3:
sobremesa = 170;
break;

case 4:
sobremesa = 200;
break;

default:
printf("Sobremesa invalida.\n");
break;

}

switch (bebida)
{
case 1:
bebida = 20;
break;

case 2:
bebida = 70;
break;

case 3:
bebida = 100;
break;

case 4:
bebida = 65;
break;

default:
printf("Bebida invalida.\n");
break;

}

totalCal = prato + sobremesa + bebida;
printf("O total de calorias e %ical\n", totalCal);

}

