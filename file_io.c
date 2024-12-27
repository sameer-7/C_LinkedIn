#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt"; // Name of the file to create or open
    char buffer[100];

    // Writing to the file
    file = fopen(filename, "w"); // Open file for writing (creates file if it doesn't exist)
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE; // Exit with error code
    }

    fprintf(file, "Hello, World!\n"); // Write a line to the file
    fprintf(file, "This is a file I/O example.\n");
    fclose(file); // Close the file after writing

    // Reading from the file
    file = fopen(filename, "r"); // Open file for reading
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE; // Exit with error code
    }

    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer); // Print each line read from the file
    }

    fclose(file); // Close the file after reading
    return EXIT_SUCCESS; // Successful execution
}
