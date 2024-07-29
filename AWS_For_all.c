#include<stdio.h>
#include <stdlib.h>

int main(){
    const char *exePath = "AWSCLIV2.msi";
    char command[256];
    snprintf(command, sizeof(command),"\"%s\"",exePath);
    int result = system(command);
    if (result == 0)
    {
        printf("Installtion Started");
    }
    else{
        printf("Failed to start installtion");
    }
    
    return 0;
}