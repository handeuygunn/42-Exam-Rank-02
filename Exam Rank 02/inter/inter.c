#include <unistd.h>
int ft_control(char x, char *str, int d)
{
    int i;

    i = 0;
    while (i < d)
    {
        if (x == str[i])
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(int argc, char **argv){
    int i ;
    int j;

    j = 0;
    i = 0;
    if(argc != 3)
        write(1, "\n", 1);
    else
    {
        while(argv[1][i])
        {
            while(argv[2][j])
            {
                if(argv[1][i] == argv[2][j])
                {
                        if (ft_control(argv[1][i], argv[1], i) == 1)
                        {
                            write(1, &argv[1][i], 1);
                            j = 0;
                        }                             
                            break;
                }
                j++;
            }
            j = 0;
            i++;
        }
    write(1, "\n", 1);
    } 
}
