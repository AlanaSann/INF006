#include <stdio.h>
// Questão 2: Entrar com a idade de varias pessoas ate o usuário informar que deseja parar. e imprimir o total de pessoas com menos de 21 e total de pessoas maiores que 50
#define TAM 50
int main()
{
  int idade[TAM], i=0, parar = 0, menores=0, maiores=0;
  while(parar != 1){
    printf("Informe a idade(Digite 0 para parar): ");
    scanf("%d", &idade[i]);
    if(idade[i] == 0)
      parar = 1;
    else if(idade[i]<21)
      menores++;
    else if(idade[i]>50)
      maiores++;
    i++;
  }
  printf("Maiores de 50 anos: %d\nMenores de 21 anos: %d\n", maiores, menores); 
}