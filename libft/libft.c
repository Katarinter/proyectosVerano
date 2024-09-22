#include <unistd.h>
#include <stddef.h>

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

size_t ft_strlen(const char *s)
{
	size_t i;
    
    i = 0;
    while (s[i] != '\0')
        i++;
    return (--i);
}

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (i++)
        if (s[i] == c)
            return (&s[i]);
}

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen(s);
    while (--i)
        if (s[i] == c)
            return (&s[i]);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while ((i < size) && (src[i] != 0))
        dst[i] = src[i++];
    return (ft_strlen(src));
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = ft_strlen(dst);
    while ((i < size) && (src[i] != 0))
        dst[j++] = src[i++];
    return (ft_strlen(src) + ft_strlen(dst));
}

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c -= 32;
    return (c);
}

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c += 32;
    return (c);
}



