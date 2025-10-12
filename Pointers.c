#include <stdio.h>

void change(int *x){
    *x = 20;
}
int main(){

    // Basics Code
    /*int a =10;
    int *p = &a;


    printf("Value of a: %d\n ",a);
    printf("Address of a: %p\n ",&a);

    printf("Value stored in p:%p\n ",p);
    printf("Value pointed by p: %d", *p);
    */


//Pointer Arithmetic
    /*int arr[] = {100,200,300};
    int *p = arr;
    printf("%d\n",*p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    */

    //Call by reference
    int a =10;
    printf("Value of a before: %d\n",a);
    change(&a);
    printf("Value of a afterwards:%d\n",a);
    return 0;
}