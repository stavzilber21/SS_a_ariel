#include "NumClass.h"
#include <stdio.h>
#include <math.h>

// returns the number in the i location in n
int pos(int n, int i){
    int r;
    r = n / pow(10, i);
    r = r % 10;
    return r;
}

//returns number of digits in given number
int len(int n){ 
    int ans = 0;
    while(n>0){
        ans = ans +1;
        n=(n-n%10)/10;
    }
    return ans;
}




int arm(int num, int sum, int n){
    if(num<10){
        return sum + pow(num,n);
    }
    else{
        sum = sum + (pow(num%10,n));
        num = num/10;
        return arm(num, sum, n);
    }
}

int isArmstrong(int n){
    int x = len(n);
    int sum = arm(n, 0, x);
    if(sum ==n){
        return 1;
    }
    else{
    return 0;
    }
}


int reverse(int n){
    int ans = 0;
    int left;
    while(n!=0){
        left = n%10;
        ans = ans * 10 + left;
        n = n/10;
    }
    return ans;
}

int Pal(int x, int n){
    if(x%10!=n%10){
        return 0;
    }
    if(x==0 && n==0){
        return 1;
    }
    return Pal(x/10,n/10);
}

int isPalindrome(int n){
    int x = reverse(n);
    return Pal(n, x);
}

