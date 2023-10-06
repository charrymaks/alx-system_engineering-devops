#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);  // Allocate memory

    if (ptr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(98);  // Terminate the program with status 98
    }

    return ptr;  // Return the allocated memory pointer
}

int main() {
    unsigned int size = 10;  // Change this to the desired size
    int *arr = (int *)malloc_checked(size * sizeof(int));

    // Use the allocated memory as needed

    // Don't forget to free the allocated memory when done
    free(arr);

    return 0;
}

