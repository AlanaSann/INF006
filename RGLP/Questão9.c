#include <stdio.h>
// 9. 
// Criar programa que leia elementos de uma matriz inteira de 10x10 e escreva os elementos da diagonal principal
void main(void){
  int matriz[10][10], i, j;
  printf("Digite a matriz: \n");
  for(i=0;i<10;i++)
    for(j=0;j<10;j++)
      scanf("%d",&matriz[i][j]);
  j=0;
  printf("Diagonal principal: \n");
  for(i=0;i<10;i++){
    printf("%d\n",matriz[i][j]);
    j++;
    }
}