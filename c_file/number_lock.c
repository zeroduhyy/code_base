#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//基本的循环结构：数字密码破译


int main() {
    char ciphertext[100000];
    fgets(ciphertext, sizeof(ciphertext), stdin);
    
    size_t length = strlen(ciphertext);
    if (ciphertext[length - 1] == '\n') {
        ciphertext[length - 1] = '\0'; // 移除换行符
    }

    char* token = strtok(ciphertext, ".");
    while (token != NULL) {
        int asciiCode = atoi(token);
        printf("%c", asciiCode);
        token = strtok(NULL, ".");
    }

    printf("\n");

    return 0;
}
