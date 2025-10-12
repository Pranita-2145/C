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
    int n;
    printf("Enter value of n: \n");
    scanf("%d",&n);

    s = (struct Student *)calloc(n,sizeof(struct Student));
    int i;

    for(i=0; i<n; i++){
        printf("Enter rollno:\n");
        scanf("%d",&((s+i)->rollno));
        printf("Enter name:\n");
        scanf("%s",(s+i)->name);
        printf("Enter Div:\n");
        scanf("%s",(s+i)->div);

    }

    for(i=0; i<n;i++){
      printf("Rollno of Student: %d\t",&((s+i)->rollno));  
      printf("Names of Student: %s\t",(s+i)->name);
      printf("Div of student: %s\t",(s+i)->div);
    }
      
}