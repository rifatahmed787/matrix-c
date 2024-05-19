#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    char S[1001];
    scanf("%s", S);
    
    if (is_palindrome(S)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    
    return 0;
}
