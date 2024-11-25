unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4 | octet << 4);
}

#include <stdlib.h>
#include <unistd.h>
void	print_bits(unsigned char octet);

int main(int argc, char **argv)
{
    int i = 1;
    while (argv[i])
    {
        print_bits(swap_bits((atoi(argv[i++]))));
        write(1, "\n", 1);
    }
}