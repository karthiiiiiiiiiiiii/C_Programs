#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char line[100];
    int i, n, count = 0;
    scanf("%[^\n]", line);

    n = strlen(line);

    for (i = 0; i < n; i++) {
        if (isupper(line[i])) { 
            count++;
        }
    }

    printf("The number of uppercase letters in the string \"%s\" is %d\n", line, count);

    return 0;
}
