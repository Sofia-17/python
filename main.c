//Написать функцию, которая изо всех слов файла, состоящих только из
//заглавных букв английского алфавита и начинающихся на букву A, находит самое короткое слово.
#include <stdio.h> 
#include <stdlib.h>
#include "solver.h"

int main(void) {
  char* answer = NULL;
  int error = search("input.txt", &answer);
  if (error > 0) { 
    printf("Something went wrong\n");
  } else { 
      printf("Everything is ok\n");
  }
  printf("%s",answer);
  return 0;  
}

