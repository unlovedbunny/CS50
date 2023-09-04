/*Recreate the Mario Pyramid in C, albeit in text, using hashes (#) for bricks,
a la the below. Each hash is a bit taller than it is wide, so the pyramid itself
is also be taller than it is wide.

height =
i = Lines
dot = Blank spaces (or simply dots)
hash = count of #
*/

#include <stdio.h>

int main(void) {
int height, i, dot, hashes;
  do {
    printf("Enter the height of the pyramid (1-10):\t");
    scanf("%d", &height);
  } while (height < 1 || height > 10);

  printf("\n");

  for (i = 1; i <= height; i++) {
    for (dot = 0; dot < height - i; dot++) {
      printf(" ");
      }for (hashes = 1; hashes <= i; hashes++) {
        printf("#");
    }
       printf("\n");
  }

  return 0;
}