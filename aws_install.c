#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char choice[4]; // Array to hold the user's input (we expect "yes" or "no")

    printf("Welcome to AWS CLI to All\n");
    printf("You Want to continue Enter 'yes' or 'no': \n");
    scanf("%3s", choice); // Limit input to 3 characters plus null terminator

    if (strcmp(choice, "yes") == 0)
    { // Use strcmp to compare strings

        printf("Your Want to Continue the process thank you\n");
        printf("Choss Your Os Wisely\n");
        printf("Windows for w & Linux for l\n");

        char more[4];
        scanf("%3s", more);
        if (strcmp(more, "w") == 0)
        {
            printf("You have Choice is Windows\n");
            printf("\n");
            printf("You want to continue the installation process. 'yes' or 'no' :");
            char north[4];
            scanf("%3s", north);
            if (strcmp(north, "yes") == 0)
            {
                const char *exePath = "AWSCLIV2.msi";
                char command[256];
                snprintf(command, sizeof(command), "\"%s\"", exePath);
                int result = system(command);
                if (result == 0)
                {
                    printf("Installtion Complete");
                }
                else
                {
                    printf("Failed to start installtion");
                }
            }
            else
            {
                printf("You choice is no.\n");
            }
        }
        else if (strcmp(more, "l") == 0)
        {
            printf("You have Choice is Linux");
        }

        else
        {
            printf("The process didn't go as planed");
        }
    }
    else
    {
        printf("You Don't want to continue the process.\n");
    }

    return 0;
}
