#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    char j;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
                {
                    j = argv[1][i] - 'a';
                    j = 'z' - j;
                    write(1, &j, 1);
                }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
                {
                    j = argv[1][i] - 'A';
                    j = 'Z' - j;
                    write(1, &j, 1);
                }
            else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
                {
                    j = 'z' - argv[1][i];
                    j = 'a' + j;
                    write(1, &j, 1);
                }
            else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
                {
                    j = 'Z' - argv[1][i];
                    j = 'A' + j;
                    write(1, &j, 1);
                }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}