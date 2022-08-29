#include <stdio.h>
#include <string.h>
//Questão 5
// Criar um programa que deixe entrar com nome e idade de 20 pessoas e
// armazene em um vetor todos os nomes que comecem com a letara no
// intervalo L-S

int main(){
  char nomes[20][20], temp[20];
  int idade, i;
  for(i=0;i<20;i++){
    printf("Digite o nome e idade: ");
    fflush(stdin);
    fgets(temp, 20, stdin);
    for(int j=0; j<20; j++)
        if(temp[i] == 10)
            temp[i] = 0;
    scanf("%d", &idade);
    getchar();
    if(temp[0] >= 76 && temp[0] <=83){
      strcpy(nomes[i], temp);
      printf("A inicial do nome %s está entre L e S", nomes[i]);
    }
    i++;
  }
}