#include <stdio.h>

int main() {
    char message[100];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    printf(message);

    return 0;
}
