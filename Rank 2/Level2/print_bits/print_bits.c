#include <unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char   bit;
    int n;

    n = 8;
    while (n--)
    {
        bit = (octet >> n & 1) + '0';
        write (1, &bit, 1);
    }
}

#include <stdlib.h>
int main(int argc, char **argv)
{
    int i = 1;
    while (argv[i])
    {
        print_bits(atoi(argv[i++]));
        write(1, "\n", 1);
    }
}