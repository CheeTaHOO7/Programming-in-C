#include<stdio.h>
#include<conio.h>
void main() {
  clrscr();
  for(int i = 1; i <= 10; i++) {
     printf("Multiplication Table of %d:\n", i);
     for(int j = 1; j <= 10; j++) {
	printf("%d * %d = %d\n", i, j, i * j);
     }
     printf("\n");
  }
 getch();
}