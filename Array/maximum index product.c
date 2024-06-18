
/*Problem statement

Implement the following function

int maxindexproduct(int* arr, int n);

The function accepts an integer array ‘arr’ of size n. Implement the function to find and return maximum index product. For every index ‘j’, index product = left(j) x right (j). Left(j) = an index ‘k’ which is closest to index ‘j’ , such that k < j and arr[k] > arr[j], if no such index ‘k’ exists then left(j) = 0. Right(j) = an index ‘i’ which is closest to index ‘j’ , such that i>j and arr[i] > arr[j] , if no such index ‘i’ exists then right(j) = 0.

Note

Return -1 if the array is empty (or none in the case of python)

Indexing starts from 0.

Example

Input

7 // input size

-3 4 3 6 4 5 -2

Output

15

Explanation

Index product

Index product of index 0=0x1=0

Index product of index 1=0x3=0

Index product of index 2=1x3=3

Index product of index 3=0x0=0

Index product of index 4=3x5=15

Index product of index 5=3x0=0

Index product of index 6=5x0=0

The maximum index product is 15. Thus, the output is 15.
  */

CODE:

#include<stdio.h>
int left(int a[],int n,int j){
    for(int k=j;k>=0;k--){
        if(k<j && a[k]>a[j]){
            return k;
        }
        
    }
    return 0;
}
int right(int a[],int n,int j){
    for(int i=j;i<n;i++){
        if(i>j && a[i]>a[j]){
            return i;
        }
    }
    return 0;
}
int main(){
    int n,max=0,prod;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        prod=left(a,n,j) * right(a,n,j);
        if(prod>max){
            max=prod;
        }
  }
    printf("%d",max);
}
