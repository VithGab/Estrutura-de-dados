#include <stdio.h>
int main(){
  float vetor[4] = {45.50, 62.70, 55.55, 96.87};
  float *p = vetor;

  float soma = 0.0;
  for(int i = 0; i < 4; i++){
    soma = soma += *(p+i);
  }
  printf("Sum weights:%3f\n", soma);
  printf("Avarege weights: %3.f\n", soma/4);
  
  float highest_w = *p;
  float lowest_w = *p;
  
  for(int i = 0; i < 4; i++){
    if(*(p + i) > highest_w){
      highest_w = *(p + i);
    }
    if (*(p + i) < lowest_w){
      lowest_w = *(p + i);
    }
  }
  printf("Highest weight: %.2f\n", highest_w);
  printf("Lowest weight: %.2f\n", lowest_w);
  return 0;
}