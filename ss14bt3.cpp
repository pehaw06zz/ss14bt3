#include <stdio.h>
#include <string.h> 
int main() {
    char str[] = "Hello World";
    printf("Chuoi da khai bao: %s\n", str);
    int length = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n"); 
    return 0;
}

