#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // Open a file for writing
    file = fopen("user_info.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Taking user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Using fgets to read string with spaces
    printf("Enter your age: ");
    scanf("%d", &age);

    // Writing data to the file
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    printf("Information saved to 'user_info.txt'\n");

    return 0;
}