#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isPrime(int n){
    if(n==1){
        return 1;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int Factorial(int n){
   int ans = n;
   for(int i=2; i<n; i++){
       ans = ans *i;
   }
    return ans;
}

int isStrong(int n){
    int ans = 0; 
    int x=0;
    int y =n;
    while(y>0){
        x = y%10;
        ans = ans + Factorial(x);
        y = (y - x)/10;
    }
    return n==ans;
}