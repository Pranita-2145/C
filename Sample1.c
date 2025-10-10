#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,i,*p;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  p=(int *)malloc(n*sizeof(int));
  for(i=0; i<n; i++){
    printf("Enter the element\n");
    scanf("%d",(p+i));
  }
  for(i=0; i<n; i++){
    printf("%d\n",(p+i));
  }
  return 0;
}