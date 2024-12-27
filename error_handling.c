#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "example.txt"; // Name of the file to open
    char buffer[100];

    // Attempt to open the file
    file = fopen(filename, "r"); // Open for reading
    if (file == NULL) {
        // Error handling: file couldn't be opened
        perror("Error opening file");
        return 1; // Exit the program with an error code
    }

    // Read from the file
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer); // Print each line read
    }

    // Close the file
    if (fclose(file) != 0) {
        perror("Error closing file");
        return 1; // Exit with an error code
    }

    return 0; // Successful execution
}
