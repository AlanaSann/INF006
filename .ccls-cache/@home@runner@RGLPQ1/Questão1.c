// Questão 1: Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um material radioativo. Sabendo-se que este perde 25% de sua massa a cada 30 segundos, criar um programa que imprima o tempo necessário para que a massa deste material se torne menor que 0,10 gramas. O programa pode calcular o tempo para varias massas.
int main()
{
  int contador = 0;
  float massa;
  printf("Digite a massa: ");
  scanf("%f", &massa);
  while(massa>=0.10)
  {
    massa *= 0.75;
    contador++;
  }
  contador *= 30;
  printf("Demorou %d segundos.", contador);
}