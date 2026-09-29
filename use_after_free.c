#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name = malloc(20);

    strcpy(name, "Student");

    free(name);

    printf("Name: %s\n", name);

    return 0;
}
