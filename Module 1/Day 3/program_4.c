#include <stdio.h>
void reverse(int array[],int n ){
    int t ;
    for(int i = 0 ; i<n ; i++){
        t = array[i];
        array[i]= array[n-i];
        
    }
}


int main() {
    int num[4];
    printf("Enter a 4-digit number: ");
    int n  = sizeof(num)/sizeof(num[0]);

    for(int i = 0; i< n ; i++){
    scanf("%d", &num[i]);
    }
    
    return 0;
}
