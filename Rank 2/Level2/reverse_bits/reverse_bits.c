unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char bit;
    int n;

    bit = 0;
    n = 8;
    while (n--)
    {
        bit = bit << 1;
        bit = bit | (octet & 1);
        octet = octet >> 1;
    } 
    return bit;
}

/*
#include <stdlib.h>
#include <unistd.h>
void	print_bits(unsigned char octet);

int main(int argc, char **argv)
{
    int i = 1;
    while (argv[i])
    {
        print_bits(reverse_bits((atoi(argv[i++]))));
        write(1, "\n", 1);
    }
}*/