#include <stdio.h>
enum weekday{
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

char * colors[] = {"Red", "Blue", "Orange", "Grey", "Pink", "White","Violate"};

void main(){
    enum weekday today;

    for(today = Sunday; today<= Saturday; today++){
        if(today == Sunday){
            printf("\n Holiday");
            continue;
        }

        printf("\nDay%d\t colors: %s", today, *(colors + today));
    }
}