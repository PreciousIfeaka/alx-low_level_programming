#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);

int main(void)
{
	char *bred;
	char brm[] = "Whiskey lane association";
	bred = _memset(brm, '+', 6);
	printf("%s\n", bred);
}

char *_memset(char *s, char b, unsigned int
 n)                                        {
        char *buff = s;
        unsigned int i = 0;                

	while (*s != '\0' && i < n)                {                                                  i++;                                       *s++ = b;                          }                                          while (*s != '\0')                         {                                                  *s++;                              }
        *s = '\0';
        return (buff);
}
