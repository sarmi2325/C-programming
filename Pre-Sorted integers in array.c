Pre-Sorted integers in an array

/*Problem statement

You are given an array of integers, arr, of size array_length. Your task is to find the number of elements whose 
positions will remain unchanged when arr is sorted in ascending order.

For example, let arr = {1, 3, 2, 4, 5}. If arr were to be sorted in ascending order, it would appear as {1, 2, 3, 4, 5}. By inspection, 
the integers 1, 4 and 5 do not change position before and after sorting. Hence, in this example, there are 3 elements whose position will 
remain unchanged when arr is sorted in ascending order.

Input
1 
10

Output
1
*/
CODE:

#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d", &n);
    int arr[n],sorted[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sorted[i]=arr[i];
    }
    
    /* Sorting array*/
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sorted[i]>sorted[j]){
                sorted[i]=sorted[i]+sorted[j]-(sorted[j]=sorted[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(sorted[i]==arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
