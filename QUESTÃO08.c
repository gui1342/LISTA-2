/*8. Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior do que ou igual às duas prestações; estas devem ser iguais, 
inteiras e as maiores possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria 
for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são iguais a R$ 100,00. Escreva um programa que receba o valor da mercadoria e forneça o valor da 
entrada e das duas prestações, de acordo com as regras acima.*/

#include<stdio.h>


int main( ){

int prest1, prest2; float v_produto, entrada;

printf ("Informe o Valor do produto:R$");

scanf ("%f", &v_produto);

prest1 = v_produto / 3;

prest2 = prest1;

entrada = v_produto - (prest1 + prest2);

printf ("Valor da entrada: R$%.2f\nValor da primeira prestação: R$%d,00\nValor da segunda prestação: R$%d,00\n", entrada, prest1, prest2);

  return 0;

}
