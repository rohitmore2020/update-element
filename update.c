#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the array elements");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter the %d th element ",i+1);
        scanf("%d",&a[i]);
    }

    printf("before updating\n");

    for (int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    int q;
    
    printf("enter the number of elements to update ");
    scanf("%d",&q);
    
    if(q>n){
        printf("please enter correct no of elements to update\n");
        }
   else{ int pos,value;
    for(int j=0;j<q;j++){
    
    printf("enter the element's position ");
    scanf("%d",&pos);
    
    if(n>=pos){
    printf("enter the value to be updated at %d position\n",pos);
    scanf("%d",&value);
    
    a[pos-1]=value;
    }
   else {
    printf("please enter the correct postion to update ");
   }
 }
   }
    printf("after updating\n");
for (int i=0;i<n;i++){
        printf("%d\t",a[i]);
}
    return 0;
}