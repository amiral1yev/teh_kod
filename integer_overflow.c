#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &count);

    size = count * sizeof(int);

    printf("Memory required: %d bytes\n", size);

    int *data = malloc(size);

    if (data == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    free(data);

    return 0;
}
