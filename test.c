#include <stdio.h>
#include "string.h"
int main(){
    char password[100];
    printf("\nPlease input your Password: ");
    scanf("%s", password);
    if (!strcmp(password, "stackoverflow")) {
        printf("Welcome to the new world\n");
    }else {
        printf("Login failed\nGoodbye!\n");
    }
    return 0;
}
