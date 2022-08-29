#include <stdio.h>
// 11. 
// Criar e armazenar ua matriz a 10x10 e gerar e imprimir a matriz invertida
void main(void){
  int matriz[10][10], i, j;
  printf("Digite a matriz: \n");
  for(i=0;i<10;i++)
    for(j=0;j<10;j++)
      scanf("%d",&matriz[i][j]);
  printf("Matriz invertida: \n");
  for(i=9;i>=0;i--)
    for(j=9;j>=0;j--)
      printf("%d\n",matriz[i][j]);
}