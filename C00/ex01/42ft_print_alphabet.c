#include <stdio.h>

void printAlphabet(char startChar, int numChars) {
    for (int i = 0; i < numChars; i++) {
        printf("%c ", startChar + i);
    }
    printf("\n");
}

int main() {
    char startChar = 'a';
    int numChars = 26;
    printAlphabet(startChar, numChars);
    return 0;
}
