char    *ft_strcpy(char *s1, char *s2){
    int i;
    int j;

    i = 0;
    j = 0;
    while(s2[j])
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = 0;
    return(s1);
}
