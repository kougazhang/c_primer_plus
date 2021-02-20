#include <stdio.h>

int main(void) {
    const char *firstName ="zhang";
    const char *lastName="zhao";

    printf("%s %s\n", firstName, lastName);
    printf("%s\n%s\n", firstName, lastName);
    printf("%s ", firstName);
    printf("%s\n", lastName);

    return 0;
    
}

