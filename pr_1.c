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
for(int i = 0 ; i< n-1 ; i++){
    for(int j = 0 ; j < n-i-1 ; j++){
        if(a[j] > a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
printf("\nsort:\n");
for(int  i= 0 ; i< n ; i++){
    printf("%d\t",a[i]);
}
    return 0;
}