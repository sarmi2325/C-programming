/*Problem statement

Implement the following function: 
int CountDigiOoccurrences(int l, int u, int x);

The function accepts 3 positive integers ‘l’, 'u' and 'x' as its arguments. 
You are required to calculate the number of occurrences of a digit 'x' in the digits of numbers lying in the range between ‘I’ and 'u' both inclusive, and return the same. 

Input
l: 2
u: 13
x: 3

Output
2

Explanation
The number of occurrences of digit 3 in the digits of numbers lying in the range [2, 13] both inclusive is 2, ie (3, 13), hence 2 is returned.
*/

CODE:

#include<stdio.h>
int CountDigiOoccurrences(int l,int u,int x){
    int count=0;
    for(int i=l;i<=u;i++){
        int temp=i;
        while(temp!=0){
            if(temp%10==x){
                count++;
            }
            temp/=10;
        }
    }
    return count;
}
int main(){
    int l,u,x;
    scanf("%d%d%d",&l,&u,&x);
    printf("%d",CountDigiOoccurrences(l,u,x));
    return 0;
}
