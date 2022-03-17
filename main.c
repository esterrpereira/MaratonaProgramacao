#include <stdio.h>

int main(void) {
int idade;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  if (idade <= 8 )
    printf(" Lógica Básica");
  else 
    if (idade > 9 && idade <= 12 )
     printf(" Lógica");  
  if (idade > 13  && idade <= 15)
     printf("Lógica Avançada");
  if ( idade >= 16 && idade <= 20)
     printf(" Programação Básica");
  if (idade > 21 )
     printf("Programação Avançada");
 
 
}