#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main(){

    //Receive two numbers
     int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    //Find which number is greater
    int min = 0;
    int max = 0;

    max = a;
    min = b;

    if(b>a){
        max = b;
        min = a;
    }
  
    printf("The Armstrong numbers are:");
    for(int i = min; i<=max; i++){
        if(isArmstrong(i)){
            printf(" %d",i );
        }
    }
    printf("\n");

    printf("The Palindromes are:");
    for(int i = min; i<=max; i++){
        if(isPalindrome(i)){
            printf(" %d",i );
        }
    }
    printf("\n");

    printf("The Prime numbers are:");
    for(int i = min; i<=max; i++){
        if(isPrime(i)){
            printf(" %d",i );
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for(int i = min; i<=max; i++){
        if(isStrong(i)){
            printf(" %d",i );
        }
    }
    printf("\n");
    
}