/* https://www.hackerrank.com/challenges/playing-with-characters/problem */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     char ch,s[100],sen[100];
     scanf("%c",&ch);
     scanf("%s",&s);
     scanf("\n");
     scanf("%[^\n]%*c",&sen);
     printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}

