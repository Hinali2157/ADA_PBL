#include <stdio.h>
int main (){
    int n;
printf("enter size of array: ");
scanf("%d",&n);
int a[n];
printf("enter element:\n");
for(int  i= 0 ; i< n ; i++){
    scanf("%d",&a[i]);
}
printf("bubble sort:\n");
printf("unsort:\n");
for(int  i= 0 ; i< n ; i++){
    printf("%d\t",a[i]);
}
for(int i = 1 ; i< n ; i++){
   int key = a[i];
   int j = i -1;
   while( j>=0 && a[j] > key){
       a[j+1] = a[j];
       j--;
   }
   a[j+1] = key ;
}
printf("\nsort:\n");
for(int  i= 0 ; i< n ; i++){
    printf("%d\t",a[i]);
}
    return 0;
}