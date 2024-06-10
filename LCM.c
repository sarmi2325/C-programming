Lowest Common Multiple (LCM) 

/*You are given an array of positive integers, arr, of size array_length. You are asked to build set S which consists 
of the LCM of every pair of adjacent elements in arr. Your task is to find the largest element in set S.

For example, for the array {1, 2, 3, 4}, set S = { lcm(1,2), lcm(2,3), lcm(3,4) } = {2, 6, 12}. The largest element is 12.

Notes

The array contains only positive integers.

Adjacent elements may NOT be circular, i.e. they may not wrap around the end of the array

Definition of LCM

A multiple of a number, num, is a number that can be divided by num. For example, the multiples of 5 are 5, 10, 15, 20, 25, and so on. 
The lowest common multiple (LCM) of two numbers, a and b, is the smallest positive number that is a multiple of both a and b.


Input
4
1 3 2 4

Output 
6
*/

CODE:

#include <stdio.h>

int main()
{
    int n,max=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        int j=2;
        while(1){                              /*iterate to find factor*/
            if(j%arr[i]==0 && j%arr[i-1]==0){
              
                if(j>max){             /* finding maximum*/
                    max=j;
                
                }
                break;                /* break as soon as lcm is found*/
                
            }
            j++;
        }
    }
    printf("\n%d",max);
 
    return 0;
}
