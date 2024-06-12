/*
Sum of numbers with set bit

You are given a function, 
int SumofSetBitNumbers(int n, int set);
The function accepts two integers ‘n’ and ‘set’ as its argument where ‘n’ is the number of bits and ‘set’ is the number of set bits. 
  Implement the function to find the sum of all numbers possible from ‘n’ bits having the count of ‘set’ bits equal to set.

Input
n: 3
set: 2

Output
14

Explanation
All possible 3 bit numbers are 0, 1, 2, 3, 4, 5, 6, 7 with binary representation 000, 001, 010, 011, 100, 101, 110, 111. Numbers with 2 bits set are 3, 5 and 6 summation of which is equal to 14.

*/

CODE:

#include<stdio.h>
#include<math.h>

int main(){
    int n,set,count=0,sum=0;
    scanf("%d%d",&n,&set);
    int pos=pow(2,n);
   for(int i=1;i<pos;i++){
      int temp=i;
       while(temp!=0){
           
           if(temp%2==1){
               count++;
           }
           temp/=2;
       }
       if(count==set){
           sum+=i;
       }
       count=0;
   }
    printf("%d",sum);
}
