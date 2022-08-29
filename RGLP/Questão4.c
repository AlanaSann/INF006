#include <stdio.h>
// Chico tem 1.50m e cresce 2 centímetros por ano, enquanto Juca tem 1.10m e
// cresce 3 cm por ano. construir um programa que calcule e imprima
// quantos anos serão necessários para Juca seja maior que Chico;
//Questão 4
int main(){
  double Chico = 1.5, Juca = 1.1;
  int anos=0;
  while(Chico>Juca)
    {
      Chico+= 0.02;
      Juca+= 0.03;
      anos++;
    }
  printf("Juca levou %d anos para ultrapassar Chico", anos);
}