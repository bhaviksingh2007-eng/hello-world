#include <stdio.h>
#include <ctype.h>  // for isupper, islower, isdigit

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("The character '%c' is an Uppercase Alphabet.\n", ch);
    }
    else if (islower(ch)) {
        printf("The character '%c' is a Lowercase Alphabet.\n", ch);
    }
    else if (isdigit(ch)) {
        printf("The character '%c' is a Digit.\n", ch);
    }
    else {
        printf("The character '%c' is a Special Character.\n", ch);
    }

    return 0;
} 