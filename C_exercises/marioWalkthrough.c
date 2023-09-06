#include <stdio.h>

int main(void) {
  int row, space, height, hash;

  do {
    printf("Enter the height of the pyramid (1 - 10):\t");
    scanf("%d", &height);
  } while (height < 1 || height > 10);
  ;
  ;

  printf("\n");
  for (row = 1; row <= height; row++) {

    for (space = 0; space < height - row; space++) {
    printf(" ");
    }
      for (hash = 1; hash <= row; hash++) {
      printf("#");
      }
        printf("  ");
    
        for (hash = 1; hash <= row; hash++){
        printf("#");
        }
    printf("\n");
  }

  return 0;
}