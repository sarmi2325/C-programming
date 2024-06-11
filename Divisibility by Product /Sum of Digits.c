Divisibility by Product / Sum of Digits

/*Problem statement

You are given an array of positive integers, arr, of size array_length. 
How many elements in arr are perfectly divisible by either the product or the sum of their digits?

Input
1
303

Output
0

Explanation
Sum of digits of 303 = 6, the product of digits of 303 = 9
303 is not divisible by 6 or 9, hence the output is 0.

*/

CODE:

#include <stdio.h>

int sumofdigit(int a){
    int sum=0,temp=a;
    while(temp!=0){
        sum+=(temp%10);
        temp/=10;
    }
    if(a%sum==0){
        return 1;
    }
    return 0;
}

int productofdigit(int a){
    int prod=1,temp=a;
    while(temp!=0){
        if(temp%10!=0){
        prod*=(temp%10);
        }
        temp/=10;
    }
    if(a%prod==0){
        return 1;
    }
    return 0;
}
int main() {
    
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
    if(sumofdigit(arr[i])==1 || productofdigit(arr[i])==1)
      c++;
    }
    printf("%d",c);

    return 0;
}
