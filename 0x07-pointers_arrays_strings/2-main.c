#include "main.h"
#include <stdio.h>

char *_strchr(char*s, char c);
int main(void)
{
	char brm[] = "Whiskey lane association";

	printf("%s\n", _strchr(brm, 'n'));
}
char *_strchr(char *s, char c)
{
        char *buff = s;
        while (*s != '\0' && *s != c)
                s++;
        if (*s == c)
                buff = s;
        else
                buff = '\0';
        return (buff);
}
