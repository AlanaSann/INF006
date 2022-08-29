//8. 
// Criar programa que leia dados de 20 elementos inteiros. imprimir o maior
// e o menor, sem ordenar, o percentual de números pares e a media dos
// elementos do vetor.
#include <stdio.h>
void main(void){
  int conjunto[20], maior=0, menor=0, i, j;
  double percentual=0,media=0;
  printf("Digite o conjunto de números: ");
  for(i=0;i<20;i++)
    scanf("%d",&conjunto[i]);
  for(i=0;i<20;i++){
    for(j=0;j<20;j++){
      if(maior<conjunto[j])
        maior = conjunto[j];
      if(menor>conjunto[j])
        menor = conjunto[j];
    }
    media += conjunto[i];
    if(conjunto[i]%2==0)
      percentual++;
  }
  percentual/=0.2;
  media/=20;
  printf("Maior número: %d\n"
         "Menor número: %d\n"
         "Percentual de números pares: %.0lf%\n"
         "Média: %.2lf\n",
    maior, menor, percentual, media);
}