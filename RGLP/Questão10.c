#include<stdio.h>
// 10. 
// Criar programa que leia e armazena os elementos de uma matriz M inteira
// 10x10 e imprima todos os elementos que estão em linhas pares e colunas
// impares.
void main(void){
  int matriz[10][10], i, j, k;
  printf("Digite a matriz: \n");
  for(i=0;i<10;i++)
    for(j=0;j<10;j++)
      scanf("%d",&matriz[i][j]);
  printf("Linha par e coluna ímpar: \n");
  for(i=0;i<10;i+=2){
    for(j=1;j<10;j+=2)
      printf("%d\n",matriz[i][j]);
    }
}