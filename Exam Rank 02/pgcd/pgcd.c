#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int x;
    int y;
    int z;
    
    i = 2;
    z = 1;
    if(argc != 3)
        printf("\n");
    else
    {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        while(i <= x && i <= y)
        {
            while((x%i == 0) && (y%i == 0))
            {
                if(x == 1 || y == 1)
                    break;
                z *= i;
                x /= i;
                y /= i;
            }
            i++;
        }
        printf("%d", z);
        printf("\n");
    }
}
