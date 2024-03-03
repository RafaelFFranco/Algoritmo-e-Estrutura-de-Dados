#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num;
  char pisos[5][5] = {
    "#",
    "##",
    "###",
    "####",
    "#####"
  };
  
  do {
    printf("Digite um número de 1 a 5; aperte 0 para encerrar: ");
    scanf("%d", &num);
    
    switch(num) {
      case 1:
        printf("%s\n", pisos[0]);
        break;
      case 2:
        printf("%s\n", pisos[0]);
        printf("%s\n", pisos[1]);
        break;
      case 3:
        printf("%s\n", pisos[0]);
        printf("%s\n", pisos[1]);
        printf("%s\n", pisos[2]);
        break;
      case 4:
        printf("%s\n", pisos[0]);
        printf("%s\n", pisos[1]);
        printf("%s\n", pisos[2]);
        printf("%s\n", pisos[3]);
        break;
      case 5:
        printf("%s\n", pisos[0]);
        printf("%s\n", pisos[1]);
        printf("%s\n", pisos[2]);
        printf("%s\n", pisos[3]);
        printf("%s\n", pisos[4]);
        break;
    }
  } while (num != 0);

  return 0;
}