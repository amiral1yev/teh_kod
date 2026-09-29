#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];

    printf("Enter filename: ");
    fgets(filename, sizeof(filename), stdin);

    char command[150];

    snprintf(command, sizeof(command),
             "cat %s", filename);

    system(command);

    return 0;
}
