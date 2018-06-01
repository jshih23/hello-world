#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, j, rows;
    if (argc > 2 || argc <= 1){
        fprintf(stderr, "Invalid Arguments\n");
    }
    else{
        //fprintf(stderr, "%c\n", argv[i]);
        rows = atoi(argv[1]);
        printf("%d\n", rows);

    //printf("Enter number of rows: ");
    //scanf("%d",&rows);
	// loop to print stars
        for(i=1; i<=rows; ++i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("*s ");
            }
            printf("\n");
        }
    }
    return 0;
}
