#include <stdio.h>

void _puts(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                putchar(str[i]);
                i++;
        }
        putchar('\n');
}

int main(void)
{
        _puts("\"Programming is like building a multilingual puzzle");
        return (0);
}
