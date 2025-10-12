#include <stdio.h>

int main(){

    int **p,i,j,rows,cols;
    rows = 2;
    cols=3;
    p=(int *)malloc(rows*sizeof(int));
    for(i=0; i<rows; i++){
        *p = (int **)malloc(cols*sizeof(int));
    }
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter the element: ");
            scanf("%d",(*(p+i)+j));
        }
    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("\t%d",*(*(p+i)+j));
        }
        printf("\n");
    }
    return 0;
}