/*King George has built an exclusive street for his executives-class employees to build their houses. 
The street is divided into M sections. Each section corresponds to two plots. one on each side of the street. 
He has assigned you to plan the street. You have to decide on which plots along the street can the new building 
be built to do this you first need to calculate the number of possible ways in which free plots can be assigned to 
buildings, keeping in mind the restriction mentioned below-

No two consecutive plots can have buildings on them. This is done to ensure a sense of free space in the area.
Your task is to find and return the number of possible assignments.

Input Specification:

Input1: An integer M depending on the number of sections

Output Specifications: streetsReturn the number of possible assignments.


Input1: 3

Output: 25

Explanation:

If we look at one of the streets and mark X as a plot where building is allowed and Y as a free plot, we have XYX, YXY, YYX, XYY, YYY Because the same number exists on the other side, we have 5*5=25 combinations.

Therefore 25 is returned as the output.*/

CODE:

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    arr[0]=1,arr[1]=2;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("%d",arr[n]*arr[n]);
    return 0;
}
