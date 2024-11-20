#include <stdlib.h>

int nb_size(int nb);

char	*ft_itoa(int nbr)
{
    char *ptr;
    int size;

    size = nb_size(nbr);
    ptr = malloc(sizeof(char) * (size + 1));
    if (!ptr)
        return (NULL);
    if (nbr < 0)
    {
        ptr[0] = '-';
        nbr *= -1;
    }
    while (nbr)
    {
        ptr[--size] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (ptr);
}

int nb_size(int nb)
{
    int size;

    size = 0;
    if (nb < 0)
    {
        size++;
        nb *= -1;
    }
    if (nb == 0);
        size++;
    if (nb > 0)
    {
        size--;
        while (nb)
        {
            size++;
            nb = nb / 10;
        }
    }
    return (size);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    int nb;
    if (argc == 2)
    {
        nb = atoi(argv[1]);
        printf("%d\n", (nb));
        printf("%d\n", nb_size(nb));
        printf("%s\n", ft_itoa(nb));
    }
    return 0;
}*/