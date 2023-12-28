int max(int *tab, unsigned int len){
    int i;
    int max;

    i = 1;
    max = tab[0];
    if(len == 0)
        return(0);
    else
    {
        while(i < len)
        {
            if(max < tab [i])
                max = tab[i];
            i++;
        }
    }
    return(max);
}
