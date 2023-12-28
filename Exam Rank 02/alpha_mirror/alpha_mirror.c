#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    int x;
    int y;

    i = 0;
    if(argc != 2)
        write(1, "\n", 1);
    else
    {
    while(argv[1][i])
    {
        if(argv[1][i] >= 65 && argv[1][i]<= 77)
            {
                x = 77 - argv[1][i];
                y = 78 + x;
                write(1, &y, 1);
            }
        else if(argv[1][i] >= 78 && argv[1][i] <= 90)
            {
                x = argv[1][i] - 78;
                y = 77 - x;
                write(1, &y, 1);
            }
        else if(argv[1][i] >= 97 && argv[1][i] <= 109)
            {
                x = 109 - argv[1][i];
                y = 110 + x;
                write(1, &y, 1);
            }
        else if(argv[1][i] >= 110 && argv[1][i] <= 122)
            {
                x = argv[1][i] - 110;
                y = 109 - x;
                write(1, &y, 1);
            }
        else
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    }
}
