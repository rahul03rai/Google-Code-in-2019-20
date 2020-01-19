#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("./program.txt","w");
     if(fptr == NULL)
    {
       printf("Error!");   
       exit(1);             
    }
    int c, n,points;
    points= rand()%10 + 1;
    for (c = 1; c <= points; c++)
    {    
        n = rand()%100 + 1;
        //printf("%d\n", n);    
        fprintf(fptr,"%d ",n); 
    }
    fprintf(fptr,"\n");
    for (c = 1; c <= points; c++)
    {    
        n = rand()%100 + 1;
        //printf("%d\n", n);    
        fprintf(fptr,"%d ",n); 
    }
    fclose(fptr);
    return 0;
}