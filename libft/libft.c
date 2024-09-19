#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char const *s)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    {
        write(1, s[i], 1);
        i++;
    }
}

int ft_strlen(char *s)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
        i++;
    return --i;
}

char *strchr(char *s, char c)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
}

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    else
        return 0;    
}
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return 1;
    else
        return 0;
}

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return 1;
    else
        return 0;
}

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        return 1;
    else
        return 0;    
}
