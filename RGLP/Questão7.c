//7.
// Criar programa que leia dois conjuntos de números inteiros, tendo cada
// um 10 e 20 elementos e apresente os elementos comuns aos conjuntos.
// lembre-se de que os elementos podem se repetir mas não podem aparecer
// repetidos na saída
#include <stdio.h>
int main(void){
  int conj1[2], conj2[4], i, j, igual [2], cont =0;
  printf("Digite o primeiro conjunto de números: ");
  for(i=0;i<2;i++)
    scanf("%d",&conj1[i]);
  printf("Digite o segundo conjunto de números: ");
  for(i=0;i<4;i++)
    scanf("%d",&conj2[i]);
  for(i=0; i<2; i++)
    for(j=0;j<4;j++)
      if(conj2[j]==conj1[i] && conj1[i] != igual[i]){
        igual[cont] = conj1[i];
        // printf("%d", igual[cont]);
        cont++;
        }
  printf("Números iguais: \n");
  for(i=0; i<cont; i++)
    if(igual[i]!=igual[i-1])
      printf("%d\n", igual[i]);
}
