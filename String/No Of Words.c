/*Write a program in C to count the total number of words in a string.

INPUT:
Effortless is a myth

OUTPUT:
4 */

CODE:

#include <stdio.h>
#include<string.h>
int main() {
    char str[1001];
    int count=0;
    scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==' ')
          count++;
    }
    printf("%d",count+1);
    return 0;
}
