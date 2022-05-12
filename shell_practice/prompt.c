#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - test Function
 *
 * Return: 0
 */
int main(void)
{
size_t characters;
char *buffer;
size_t n = 50;
buffer = malloc(sizeof(char) * n);
if (buffer == NULL)
return (-1);
printf("~$ ");
characters = getline(&buffer, &n, stdin);
printf("%lu characters were read.\n",characters);
printf("You typed: '%s'\n",buffer);
}


