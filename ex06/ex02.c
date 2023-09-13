#include<stdio.h>

int main(){
/*
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.
*/

int codItem, quantidade;
float cachorroQuente = 10.10, bauruSimples = 8.30, bauruOvo = 8.50, hamburguer = 12.50, cheeseburguer = 13.50, totalPgar;

printf("Digite o codigo do produto:");
scanf("%i", &codItem);

printf("Digite a quantidade do produto:");
scanf("%i", &quantidade);

switch(codItem)
{
case 100:
totalPgar = quantidade * cachorroQuente;
printf("Voce pediu %i cada um custa R$%.2f, o total a se pagar e %.2f", quantidade, cachorroQuente, totalPgar);
break;

case 101:
totalPgar = quantidade * bauruSimples;
printf("Voce pediu %i cada um custa R$%.2f, o total a se pagar e %.2f", quantidade, bauruSimples, totalPgar);
break;

case 102:
totalPgar = quantidade * bauruOvo;
printf("Voce pediu %i cada um custa R$%.2f, o total a se pagar e %.2f", quantidade, bauruOvo, totalPgar);
break;

case 103:
totalPgar = quantidade * hamburguer;
printf("Voce pediu %i cada um custa R$%.2f, o total a se pagar e %.2f", quantidade, hamburguer, totalPgar);
break;

case 104:
totalPgar = quantidade * cheeseburguer;
printf("Voce pediu %i cada um custa R$%.2f, o total a se pagar e %.2f", quantidade, cheeseburguer, totalPgar);
break;

default:
printf("Nenhum produto encontrado.");
break;

}


}