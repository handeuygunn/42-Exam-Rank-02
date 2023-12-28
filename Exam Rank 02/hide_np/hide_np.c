int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
int main(int argc, char **argv)
{
    if (argc != 3)
        write(1, "\n", 1);
    else 
    {
        int i = 0; // index for second one
        int j = 0; // index for first one
        int length = ft_strlen(argv[1]);

        while(argv[2][i] && argv[1][j])
        {
            if (argv[2][i] == argv[1][j])
                j++; 
            i++;
        }
        if (j == length)
            write(1, "1", 1);
        else 
            write(1, "0", 1);
        write(1, "\n", 1);
    }
}
