#include "main.h"
#include <stdio.h>

char *_strchr(char*s, char c);
int main(void)
{
	char brm[] = "Whiskey lane association";

	printf("%s\n", _strchr(brm, 'n'));
}

char *_strchr(char *s, char c)             {                                                  while (*s != '\0' && *s != c)                      s++;                               if (*s++ == c)                                     return (s);                        else                                               return ('\0');             	return (0);
}
