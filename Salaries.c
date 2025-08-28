#include <stdio.h>
int main()
{
  float vetor[6] = {4.000, 4.500, 5.550, 10.000, 7.452, 6.452};
  float *p = vetor;
  
  printf("First salary: %3.f\n", *p);
  printf("Last salary: %3.f\n", *(p+5));
  
  float soma;
  for ( int i = 0; i<6; i++){
    soma = soma += *(p+i);
  }
  printf("Sum salaries:%3f\n", soma);
  printf("Avarege salaries: %3.f\n", soma/6);
  return 0;
}