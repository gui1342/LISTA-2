//13. Elabore um programa que calcule o somatório de todos os números pares pertencentes a faixa A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.

#include<stdio.h>


int main( ){

int a, b, c, s, t, i;
    printf("Digite o primeiro número do intervalo: ");
    scanf("%i", &a);

  printf("Digite o segundo número do intervalo: ");
    scanf("%i", &b);

  printf("Digite o termo do somatório: ");
  scanf("%i", &t);
    int som[b];
  
    for(i = a; i < b + 1; i++){
        if(i % 2 == 0){ // tem que ser par
          som[i] = (t * i);
          printf("%i ", som[i]);
          }
        else{
          som[i] = 0;
        }
      }
    for(i = a; i <= b; i++){
      s = s + som[i];
      }
        
      
    
  printf("\nO resultado do somatório é: %i", s);
  return 0;

}