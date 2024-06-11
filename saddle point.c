/*Given a matrix of n x n size, the task is to find the saddle point of the matrix. 
A saddle point is an element of the matrix such that it is the minimum element in its row and the maximum in its column.

Input
3
1 2 3 
4 5 6
7 8 9

Output
[2,0]
*/

CODE:

#include <stdio.h>

int main() {
    
    int n,k;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        int min=arr[i][0],col_index=0;
        for(int j=1;j<n;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
                col_index=j;
            }
        }
        for(k=0;k<n;k++){
            if(arr[k][col_index]>min){
        
                break;
            }
           
        }
        if(k==n){
            printf("[%d,%d]",i,col_index);
        }
    }

    return 0;
}
