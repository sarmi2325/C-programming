/*Write a program in C to compare two strings without using string library functions.

INPUT:
AAABB
CCAAN

OUTPUT:
Strings not same
*/

CODE:

#include <stdio.h>
#include<string.h>
int main() {
    char str[1001],str1[1001];
    int flag=0;
    scanf("%s %s",str,str1);
    int len=strlen(str);
    int len1=strlen(str1);
    for(int i=0;i<len;i++){
        if(str[i]!=str1[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Strings not same");
    }
    else{
        printf("Strings are same");
    }
    return 0;
}
