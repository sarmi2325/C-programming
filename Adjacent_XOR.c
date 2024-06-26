Adjacent XOR

/*Problem Statement

You are given an integer input `num`.
Write a program to perform the following operations:
1. Obtain Z by converting `num` to Binary form.
2. For each bit A in Z, apply bitwise XOR operation with the adjacent bit present on its right, starting from the Most Significant Bit (MSB), store the obtained value back in bit A. Let the new binary number obtained by performing these operations be Y.
3. Obtain X by converting Y to a Decimal form.
Your task is to return the value of X.
[NOTE - Apply bitwise XOR operation of the Least Significant Bit (LSB) with 1 in Z].

Example 1
Input
013
Output
6
*/

CODE:

#include<stdio.h>
#include<math.h>
int fn(int n){
    int decimal_to_binary[32],XOR_convert[32];
    int index=0,sum=0;
    
    /* converting decimal to binary*/
    while(n!=0){
        decimal_to_binary[index++]=n%2;
        n/=2;
    }
    
    /*XOR operation*/
    XOR_convert[0]=decimal_to_binary[0]^1;
    for(int i=1;i<index;i++){
        XOR_convert[i]=decimal_to_binary[i]^decimal_to_binary[i-1];
    }
    
    /*converting binary to decimal*/
    for(int i=0;i<index;i++){
        sum+=(XOR_convert[i]*pow(2,i));
    }
    return sum;
   
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fn(n));
    return 0;
}
