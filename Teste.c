#include<stdio.h>

int soma(int a,int b);

void main() {
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  printf("Soma = %d\n",soma(a,b));
}

int soma(int a,int b) {
  return a + b;
}
