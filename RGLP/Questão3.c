#include <stdio.h>
// Dado um pais A, com 5.000.0000 de habitantes e uma taxa de natalidade de
// 3% ao ano, e um pais B com 7.000.00 de habitantes e uma taxa de
// natalidade de 2% ao ano. calcular e imprimir o tempo necessário para que
// a população do pais A ultrapasse a população do pais B
// Questão 3
int main(){
  long int A = 50000000, B = 700000;
  int anos=0;
  while(A>B){
    A*=1.02;
    B*=1.03;
    anos++;
  }
  printf("B levou %d anos para ultrapassar A", anos);
}