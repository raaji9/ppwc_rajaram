#include <stdio.h>
#include <string.h>

void replaceDigits(char *number) {
    for (int i = 0; number[i] != '\0'; i++) {
        if (number[i] == '0') {
            number[i] = '1';
        } else if (number[i] == '1') {
            number[i] = '0';
        }
    }
}

int main() {
    char number[100];

    printf("Enter a number: ");
    scanf("%s", number);

    replaceDigits(number);

    printf("After replacing 0 and 1, the number is: %s\n", number);

    return 0;
}
