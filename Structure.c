#include <stdio.h>
#include <stdlib.h>

/*struct book
{
    int id;
    char name[1000];
    char author[1000];
    float cost;
    int quantity;
};
*/

struct Student{
    int rollno;
    char name[100];
    char div[100];
};

void main(){
    /*struct book b;
    printf("Enter information\n");
    printf("Enter Id\n");
    scanf("%d", &b.id);
    printf("Enter Name\n");
    scanf("%s", b.name);
    printf("Enter Author\n");
    scanf("%s",b.author);
    printf("Enter Cost\n");
    scanf("%f",&b.cost);
    int quantity;
    printf("Enter Quantity: ");
    scanf("%d",&b.quantity);
    int amount = b.cost * b.quantity;
    printf("The payment is: %d",amount);
    */

    //Structure using pointer
    struct Student *s;

    s = (struct Student *)calloc(1,sizeof(struct Student));
    int i;

    for(i=0; i<5; i++){
        printf("Enter rollno:\n");
        scanf("%d",&(s->rollno));
        printf("Enter name:\n");
        scanf("%s",s->name);
        printf("Enter Div:\n");
        scanf("%s",s->div);

    }

    for(i=0; i<5;i++){
      printf("Rollno of Student: %d\t",&(s->rollno));  
      printf("Names of Student: %s\t",s->name);
      printf("Div of student: %s\t",s->div);
    }
      
}