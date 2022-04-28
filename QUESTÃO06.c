//6. Escreva um programa que transforme o computador numa urna eletrônica para eleição para presidente de um certo país, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto à confirmação do seu voto. No final da eleição o programa deve emitir um relatório contendo as porcentagens de votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O código para finalizar a urna (votação) é o usuário digitar algum número negativo.

#include <stdio.h>

int main() {
  
  float paulo = 0, renata = 0, branco = 0, nulo = 0, voto = 0, votos = 0; char conf;
  printf("Os candidatos são:\n0 - branco\n5 - Paulo\n7 - Renata\n");
  while(voto >= 0){
    
    printf("Digite o número do candidato: ");
    scanf("%f", &voto);
    getchar(); 

        puts("Confirmar? s: sim | outra tecla: não");
        conf = getchar();
    if (conf != 's') continue;
      if(voto == 5){
        printf("Você escolheu o candidato 5 - Paulo\n");
        paulo++;
        votos++;
        continue;
        }
      
      if(voto == 7){
        printf("Você escolheu o candidato 7 - Renata\n");
        renata++;
        votos++;
        continue;
        }
      
      if(voto == 0){
        printf("Você votou branco!\n");
        branco++;
        votos++;
        continue;
        }
        
      else{
        printf("Seu voto foi anulado\n");
        nulo++;
        votos++;
        continue;
        }
      }
  
      if(voto < 0){
        printf("Você digitou um número negativo e finalizou a votação!\n");
        nulo--;
        votos--;
        printf("Relatório da votação:\nTotal de votos:%.f\nPaulo: %.f%%\nRenata: %.f%%\nBranco: %.f%%\nNulo: %.f%%", votos, (paulo/votos * 100), (renata/votos*100), (branco/votos*100), (nulo/votos*100));
      }
      
  return 0;
}