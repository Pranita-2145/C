// Read 2 numbers from command line, compare them using a macros Give message if insufficient arguments passed.

#include <stdio.h>
#include <stdlib.h>
#define compare(x,y)((x>y)?0:1)
int main(int argc, char *argv[]){
    if(argc<=0){
        printf("Arguments insufficient");
        return 0;
    }
    int z,x,y;
    x = atoi(argv[1]);
    y=atoi(argv[1]);

    if(compare(x,y))
    {
        printf("X is greater");
    }
    else{

                printf("y is greater");

    }
}