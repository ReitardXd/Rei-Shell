#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  printf("$ ");
 char input[100];
 fgets(input, sizeof(100),stdin);
 
 input [strlen(input)  - 1  ]  = '\0';
 printf ( "%s : input not found\n", input);

  return 0;
}
