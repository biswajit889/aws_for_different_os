#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int main() {
    // Execute a Windows command to list directory contents
    // system("set PATH=C:\\Program Files\\Amazon\\AWSCLIV2;%PATH%");

    int a = system("aws");

    // Print the return value of the command
    printf("Command exit status: %d\n", a);

    // Terminate the programc

    // The following code will not be executed
    return 0;
}
