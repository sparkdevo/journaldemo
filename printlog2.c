#include<stdio.h>

#define PREFIX_NOTICE "<5>"

int main(void){

  printf(PREFIX_NOTICE "Hello World\n");
  fprintf(stderr, "<3>Hello  Error\n");

  return 0;
}