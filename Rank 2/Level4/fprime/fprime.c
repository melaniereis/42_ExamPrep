 #include <stdlib.h>
 #include <stdio.h>

 int get_next_prime(int nb);

 int main(int argc, char **argv)
 {
    int nb;
    int prime;
    if (argc == 2)
    {
        nb = atoi(argv[1]);
        if (nb > 0)
        {
            if (nb == 1)
                printf("%d", nb);
            prime = 2;
            while (nb > 1)
            {
                while (nb % prime == 0)
                {
                    printf("%d", prime);
                    nb = nb / prime;
                    if (nb > 1)
                        printf("*");
                }
                prime = get_next_prime(prime);
            }
        }
    }
    printf("\n");
 }

 int get_next_prime(int nb)
 {
    nb++;
    for(int i = 2; nb > i; i++)
    {
        if (nb % i == 0)
        {
            nb++;
            i = 2;
        }
    }
    return (nb);
 }