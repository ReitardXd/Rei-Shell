#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    setbuf(stdout, NULL);

    char command[1024];


    while (1){
   
    printf("$ ");
    if (!fgets(command, sizeof(command), stdin)) {
        return 0;
    }

    size_t len = strlen(command);
    if (len > 0 && command[len - 1] == '\n') {
        command[len - 1] = '\0';
    }

    if (strcmp(command,"exit") == 0){

      printf("Exiting  shell!\n");
      break;
    }

    if (command[0] == '\0') {
      continue;
    }

    printf("%s: command not found\n", command); }


    return 0;




}
