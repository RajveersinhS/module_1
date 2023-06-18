#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MIN;
    int min=INT_MAX;
    int rem, num;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num > 0) {
        //Extracting digits from number
        rem = num % 10;
        //checking minimum digit in number
        if(rem < min) {
            min = rem;
        }
        //checking maximum digit in number
        if(rem > max) {
            max = rem;
        }
        num /= 10;
    }
    printf("Max : %d Min : %d", max, min);
    return 0;
}