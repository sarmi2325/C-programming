/*
Problem Statement

Rohit is given a task to find the length of the longest contiguous sub-array within an 
array arr of length N such that the sum of its elements equals zero. In other words, 
he needs to determine the maximum number of consecutive elements in the array whose sum is zero and return that length.
Assist Rohit in the task.

Input: 
8
15 -2 2 -8 1 7 10 23

Output: 
5

Explanation: 
The longest sub-array with elements summing up to 0 is {-2, 2, -8, 1, 7}. The length of the sub-array is 5.
*/

CODE:

// You are using GCC
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    for(i=0;i<n;i++){
        int sum=0;
        for(j=i;j<n;j++){
            sum+=a[j];
          
        
        if(sum==0){
            if((j-i+1)>max)
            max=(j-i+1);
        }
        }
    }
    printf("%d",max);
}
