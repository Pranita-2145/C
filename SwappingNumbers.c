#include <stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10;
    int b =20;
    int c =30;
    int d =40;
    printf("Value of a before swapping: %d\n",a);
    printf("Value of b before swapping: %d\n",b);
    printf("Value of c before swapping: %d\n",c);
    printf("Value of d before swapping: %d\n",d);

    swap(&a,&b);
    swap(&c,&d);
    printf("Value of a after swapping: %d\n",a);
    printf("Value of b after swapping: %d\n",b);
    printf("Value of c after swapping: %d\n",c);
    printf("Value of d after swapping: %d\n",d);

}