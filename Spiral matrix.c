/*Given a 2D array, print it in spiral form.

Input
3 3
1 2 3
4 5 6
7 8 9

Output

1 2 3 6 9 8 7 4 5
  */

CODE:

#include <stdio.h>

int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int rowstart=0,rowend=r;
    int colstart=0,colend=c;
    while(rowstart<rowend && colstart<colend){
        /*left to right*/
        for(int i=colstart;i<colend;i++){
            printf("%d ",a[rowstart][i]);
        }
        rowstart+=1;
        /*top to bottom*/
        for(int i=rowstart;i<rowend;i++){
            printf("%d ",a[i][colend-1]);
        }
        colend-=1;
        /*right to left*/
        for(int i=colend-1;i>=colstart;i--){
            printf("%d ",a[rowend-1][i]);
        }
        rowend-=1;
        /*bottom to top*/
        for(int i=rowend-1;i>=rowstart;i--){
            printf("%d ",a[i][colstart]);
        }
        colstart+=1;
        
    }

    return 0;
}
