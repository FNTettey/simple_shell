#include <stdio.h>
/**
 * main - Entry point
 *@av: pointer to string with arguments
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
(void)ac;
int i;
i = 0;
while (*av[i] != '\0')
{
printf("%s\n", av[i]);
i++;
}
return (0);
}

