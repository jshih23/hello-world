#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, j, rows;
    if (argc > 1){
        fprintf(stderr, "Invalid Arguments\n", );
    }
    else{
        rows = argv[1]; 

    //printf("Enter number of rows: ");
    //scanf("%d",&rows);
	// loop to print stars
        for(i=1; i<=rows; ++i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
