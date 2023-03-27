// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,j,temp;
    scanf("%d",&n); 
    int array[n];
    
    printf("enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int small = array[0];
    for(i=0;i<n;i++){
        if(array[i]<small)
            small=array[i];
        
        
        
    }
    printf("%d",small);
    

    return 0;
}