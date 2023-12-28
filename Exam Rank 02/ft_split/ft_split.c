#include <stdlib.h>

char    **ft_split(char *str){
    int i;
    int wc = 0;
    int j;
    int a = 0;
    char **p;
    int k = 0;

    i = 0;
    while(str[i])
    {
        while(str[i] && ((str[i] == '\t') || (str[i] == '\n') || (str[i] == ' ')))
            i++;
        if(str[i] && (str[i] != '\t') && (str[i] != '\n') && (str[i] != ' '))
            wc++;
        while(str[i] && (str[i] != '\t') && (str[i] != '\n') && (str[i] != ' '))
            i++;
    }
    *p = malloc(sizeof(char *) * (wc + 1));
    i = 0;
    while(k < wc)
    {
        while(str[i] && ((str[i] == '\t') || (str[i] == '\n') || (str[i] == ' ')))
            i++;
        j = i;
        while(str[i] && (str[i] != '\t') && (str[i] != '\n') && (str[i] != ' '))
            i++;
        p[k] = malloc(sizeof(char) * (i - j + 1));
        a = 0;
        while(j < i)
        {
            p[k][a] = str[j];
            a++;
            j++;
        }
        p[k][a] = 0;
        k++;
    }
    p[k] = 0;
    return(p);
}
