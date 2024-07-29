#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char choice[4];  // Array to hold the user's input (we expect "yes" or "no")

    printf("Welcome to AWS CLI to All\n");
    printf("You Want to continue Enter 'yes' or 'no': \n");
    scanf("%3s", choice);  // Limit input to 3 characters plus null terminator

    if (strcmp(choice, "yes") == 0) {  // Use strcmp to compare strings

        printf("Your Want to Continue the process thank you\n");
        printf("Choss Your Os Wisely");
    } else {
        printf("You Don't want to continue the process.\n");
    }

    return 0;
}
