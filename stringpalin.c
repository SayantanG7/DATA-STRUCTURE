#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int length, isPalindrome = 1;
    printf("Enter a string: ");
    gets(str);

    length = strlen(str);
    for (int i = 0; i < length; i++) {
        reversedStr[i] = str[length - i - 1];
    }
    reversedStr[length] = '\0';
    for (int i = 0; i < length; i++) {
        if (str[i] != reversedStr[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
