#include <stdio.h>
#include <string.h>
// Questão 6
// 6. Armazenar nomes e nota 1, 2, de 15 alunos. calcular e armazenar a media.
// armazenar tambem a situação do aluno: AP ou RP. imprimir uma listagem
// contendo nome, notas, media e a situação de cada aluno.
typedef struct{
  char nome[20];
  double nota1;
  double nota2;
  char situaçao [3];
}Aluno;
int main(){
  Aluno alunos[3];
  double media;
  for(int i = 0; i<3; i++){
    printf("Digite o Nome: ");
    gets(alunos[i].nome);
    printf("Digite a primeira nota: ");
    scanf("%lf", &alunos[i].nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &alunos[i].nota2);
    getchar();
    printf("Digite a situação: ");
    gets(alunos[i].situaçao);
  }
  for(int i = 0; i<3; i++){
    media = (alunos[i].nota1+alunos[i].nota2)/2;
    printf("Nome do aluno: %s\nPrimeira Nota: %.2lf\n"
      "Segunda Nota: %.2lf\n"
      "Média: %.2lf\nSituação: %s\n"
      ,alunos[i].nome, alunos[i].nota1
      , alunos[i].nota2, media,alunos[i].situaçao );
    }
}