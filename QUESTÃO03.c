//3. Escreva um programa que leia um número inteiro e positivo F e calcule o fatorial deste número.

#include <stdio.h>

int main() {
  
  int f, fat, n;

  
  printf("Digite um número para ver seu fatorial: ");
  scanf("%i", &f);
  
  n = f;

  
  for(fat = 1; n > 1; n = n - 1)
    fat = fat * n;

  
  printf("O fatorial de %i é %i", f, fat);
  
  return 0;
}