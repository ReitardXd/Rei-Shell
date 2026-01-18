#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    setbuf(stdout, NULL);

    char input[1024];

    printf("$ ");
    if (!fgets(input, sizeof(input), stdin)) {
        return 0;
    }

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    printf("%s : input not found\n", input);
    return 0;
}
