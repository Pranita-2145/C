#include <stdio.h>
# define sq(x)((x)*(x))
int main(){
    int x,y,z,i;
     printf("Enter the values of x: ");
     scanf("%d",&x);
     printf("Enter the values of y: ");
     scanf("%d",&y);
    y = sq(x);
    z = sq(++x) + sq(++y);

    printf("The values of x and y are %d\t%d", x,y);
        printf("The value of z is %d", z);


    return 0;
}