#include <stdio.h>
#include <math.h>
int main(){
int a,b,c,root1, root2;
printf("Enter a,b,c: ");
scanf("%d%d%d",&a,&b,&c);
root1 = (-b+ sqrt((b*b)-4*a*c));

root2 = (-b-sqrt((b*b)-4*a*c));
printf("Root1:= %d", root1);
printf("Root2=%d",root2);
return 0;

}