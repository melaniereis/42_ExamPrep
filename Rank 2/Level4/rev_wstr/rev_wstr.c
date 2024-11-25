#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str);


int main(int argc, char **argv)
{
    int size;
    int count;
    int end;
    int start;

    if (argc == 2)
    {
        size = ft_strlen(argv[1]);
        count = 0;
        
        while (size > 0)
        {
            size--;
            if (argv[1][size] != ' ')
                count++;
            if (argv[1][size] == ' ' || size == 0)
            {
                end = 0;
                start = size;
                if (argv[1][size] == ' ')
                    start++;
                while (end < count)
                {
                    write(1, &argv[1][start + end], 1);
                    end++;
                }
                count = 0;
                if (size > 0)
                    write(1, " ", 1);
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}