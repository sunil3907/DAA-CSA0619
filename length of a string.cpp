#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    int length = strlen(str);
    printf("Length of the string is: %d\n", length);
    return 0;
}
