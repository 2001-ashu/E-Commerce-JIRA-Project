#include <stdio.h>
#include <string.h> // Required for strcmp()

int main() {
    // Predefined username and password for demonstration
    char storedUsername[] = "admin";
    char storedPassword[] = "password123";

    // Variables to store user input
    char username[50]; // Increased size for potential longer usernames
    char password[50]; // Increased size for potential longer passwords

    printf("--- Login Page ---\n");

    // Get username from user
    printf("Enter username: ");
    scanf("%s", username); // Reads a string until whitespace

    // Get password from user
    printf("Enter password: ");
    scanf("%s", password); // Reads a string until whitespace

    // Compare user input with stored credentials
    // strcmp returns 0 if strings are identical
    if (strcmp(username, storedUsername) == 0 && strcmp(password, storedPassword) == 0) {
        printf("\nLogin successful! Welcome, %s.\n", username);
    } else {
        printf("\nLogin failed. Incorrect username or password.\n");
    }
}
