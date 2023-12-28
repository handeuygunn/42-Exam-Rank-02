#include <stdlib.h>
char    *ft_strdup(char *src){
    int i;
    char *p;
    
    i = 0;
    while(src[i])
        i++;
    p = malloc(sizeof(char)*(i + 1));
    if(!p)
        return(0);
    i = 0;
    while(src[i])
    {
        p[i] = src[i];
        i++;
    }
    return(p);
}
