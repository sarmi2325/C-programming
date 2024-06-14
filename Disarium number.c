/*
Problem Statement

Emma wants to implement a program to determine whether the given number is a Disarium number. 
A number is said to be the Disarium number when the sum of its digits raised to the power of their respective positions is equal to the number itself.

Assist her in a program to determine the same using a program.

Example:

To calculate if 175 is a Disarium number:

We first determine the number of digits, which is 3.
Then, we sum the digits raised to their respective positions: 11 + 72 + 53 = 1 + 49 + 125 = 175, which is equal to the original number 175. 
Therefore, 175 is a Disarium number.
  */

CODE:

#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int t=n;
    while(t!=0){
        t/=10;
        count++;
    }
    int temp=n;
    
    for(int i=count;i>0;i--){
        
        sum+=(pow(temp%10,i));
     
        temp/=10;
        
    }

    if(sum==n){
        printf("%d is a Disarium number",n);
    }
    else{
        printf("%d is not a Disarium number",n);
    }
}
