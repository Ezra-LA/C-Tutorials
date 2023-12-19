#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];

    // Prompt user to enter user-name and password
    printf("Enter your user-name: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    // Validate the values and print appropriate message
    if (strcmp(username, "program") == 0 && strcmp(password, "bbit") == 0){
        printf("Welcome.Login successful!\n");
    }
    else{
        printf("Access denied\n");
    }

    return 0;
}
