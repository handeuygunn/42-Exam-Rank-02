#include <stdlib.h>
#include <unistd.h>

char    *ft_itoa(int nbr){
    char *p;
    int i = 0;
    int j;
    int number = nbr;

    if(nbr < 0)
    {
        number *= -1;
        nbr *= -1;
        while(nbr != 0)
        {
            nbr /= 10;
            i++;
        }
        i++;
        p = malloc(sizeof(char) * (i + 1));
        j = i;
        i--;
        while(i > 0)
        {
            p[i] = number % 10 + 48;
            number /= 10;
            i--;
        }
        p[i] = '-';
        p[j] = 0;
    }
    else if(nbr == 0)
    {
        p = malloc(sizeof(char) * 2);
        p[0] = '0';
        p[1] = 0;
    }
    else
    {
        while(nbr != 0)
        {
            nbr /= 10;
            i++;
        }
        j = i;
        p = malloc(sizeof(char) * (i + 1));
        i--;
        while(i >= 0)
        {
            p[i] = number % 10 + 48;
            number /= 10;
            i--;
        }
        p[j + 1] = 0;
        
    }
    return(p);
}
