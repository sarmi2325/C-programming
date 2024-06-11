Guitar Strings

Problem statement

Alice has a guitar with N strings. Each string can play x[i] songs before the string snaps. 
Alice decided that each day in the next N days, she will pick a string and keep playing on it until the string snapped.
Alice earns money for every song when she plays on her guitar. On the ith day (0 <= i < N), Alice earns (N-i) coins for each song she plays.
Your task is to find the maximum amount of coins Alice can ear

Input
3
3
9 
5
Output
40

CODE:

#include <stdio.h>

int main() {
    // Write C code here
    int n,sum=0,index=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
             arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
        }
    }
    
    for(int i=1;i<=n;i++){
        sum+=(arr[index++]*i);
    }
    printf("%d",sum);
    

    return 0;
}
