#include <stdlib.h>

int *ft_range(int start, int end){
    int z;
    int i;
    int *p;

    i = 0;
    if(start <= end)
        z = end - start + 1;
    else
        z = start - end + 1;
    p = malloc(sizeof(int) * z );
    if(!p)
        return(0);

    if(start <= end)
    {
        while(start <= end)
        {
            p[i] = start;
            start++;
            i++;
        }
    }
    else if (start >= end)
    {
        while(start >= end)
        {
                p[i] = start;
                start--;
                i++;
        }
    }
    return(p);
}
