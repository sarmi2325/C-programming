#include <stdio.h>
#include<string.h>
void check(char *str,int index){
    int len=strlen(str)-(index+1);
    if(str[index]==str[len]){
        if(index+1==len || index==len){
            printf("Palindrome");
            return ;
        }
        check(str,index+1);
    }
    else{
        printf("Not a Palindrome");
    }
}
int main() {
    char str[1001];
    scanf("%s",str);
    check(str,0);
   

    return 0;
}
