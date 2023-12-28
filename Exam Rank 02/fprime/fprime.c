int main(int argc, char **argv){
    int i;
    int x;

    i = 2;
    if(argc != 2)
        printf("\n");
    else
    {
        x = atoi(argv[1]);
        if(x == 1)
        {
            printf("%d",x);   
        }
        else if(x == 0)
            printf("\n");
        else
        {
        while (x != 1)
        {
            while (x % i == 0)
            {
                x /= i;
                printf("%d", i);
                if(x != 1)
                    printf("*");
            }
            i++;
        }
        }
        printf("\n");
    }
}
