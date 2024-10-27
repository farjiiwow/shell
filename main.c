#include <stdio.h>
#include <string.h>

int main(void) {
    printf("$ ");
    fflush(stdout);

    char input[100];
    fgets(input, 100, stdin);

    return 0;
}