#include <stdlib.h>

char **strtow(char *str)
{
    int i, j = -1, word = 0, start, end, k, a;
    char **ptr;

    if (str == NULL || str[0] == '\0') return NULL;

    for (i = 0; str[i]; i++)
        if ((str[i - 1] == ' ' || i == 0) && str[i] != ' ')
            word++;

    if (word == 0) return NULL;
    ptr = malloc(sizeof(char *) * (word + 1));
    if (ptr == NULL) return NULL;

    for (i = 0; str[i]; i++) {
        if ((str[i - 1] == ' ' || i == 0) && str[i] != ' ') {
            k = 0; j++; start = i;
            while (str[i] != ' ' && str[i]) { k++; i++; }
            end = i - 1; ptr[j] = malloc(sizeof(char) * (k + 1));
            if (ptr[j] == NULL) { for (i = 0; i < j; i++) free(ptr[i]); free(ptr); return NULL; }
            for (a = 0, i = start; i <= end; i++, a++) ptr[j][a] = str[i];
            ptr[j][a] = '\0';
        }
    }
    ptr[j + 1] = NULL; return ptr;
}
