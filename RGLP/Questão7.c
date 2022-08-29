//7.
// Criar programa que leia dois conjuntos de números inteiros, tendo cada
// um 10 e 20 elementos e apresente os elementos comuns aos conjuntos.
// lembre-se de que os elementos podem se repetir mas não podem aparecer
// repetidos na saída
#include <stdio.h>
int main(void){
  int conj1[10], conj2[20], i, j, igual [10], cont =0;
  printf("Digite o primeiro conjunto de números: ");
  for(i=0;i<10;i++)
    scanf("%d",&conj1[i]);
  printf("Digite o segundo conjunto de números: ");
  for(i=0;i<20;i++)
    scanf("%d",&conj2[i]);
  for(i=0; i<10; i++)
    for(j=0;j<20;j++)
      if(conj2[j]==conj1[i] && conj1[i] != igual[i]){
        igual[cont] = conj1[i];
        printf("%d", igual[cont]);
        cont++;
        }
  printf("Números iguais: \n");
  for(i=0; i<cont; i++)
    printf("%d\n", igual[i]);
}