/*
 * https://www.hackerrank.com/challenges/printing-tokens-/problem
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int length = strlen(s);
    for(int i=0;i<length;i++)
    {
        if(s[i]==' '){
        printf("\n");
        }
        else {
        printf("%c",s[i]);
        }
    }
    free(s);
    return 0;
}

