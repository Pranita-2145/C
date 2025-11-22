#include <stdio.h>
int main(int argc, char* argv[]){
    if(argc<=0){
        printf("No argument");
        return 0;
    }
    printf("Argument 1 %s", argv[1]);
    printf("Argument 2 %s", argv[2]);
    return 0;
}
