#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char word[100];
    while (scanf("%s", word) == 1)
    {
        int replace = 0;
        for (int i = 1; i < argc ; i++)
            if (strcmp(word, argv[i]) == 0)
                replace = 1;

        if (replace == 1)
            printf("CENSORED ");
        else
            printf("%s ", word);
    }
}
