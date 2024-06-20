#include <stdio.h>
#include<string.h>
int is_palindrome(char *str,int len){
    int count=0,flag=0;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[1001],word[1001],ma[1001],mi[1001];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int max=0,min=999,index=0;
    for(int i=0;i<=len;i++){
        if(str[i]!=' ' && str[i]!='\0'){
            word[index++]=str[i];
        }
        else{
            if(index>0){
            word[index]='\0';
            int length=strlen(word);
        if(is_palindrome(word,length)){
        if(length>max){
            max=length;
            strcpy(ma,word);
        }
        if(length<min){
            min=length;
            strcpy(mi,word);
        }
        }
        index=0;
        }
        }
    }
    if(max==0 && min==999 ){
        printf("No Palindromes");
    }
    else{
    printf("smallest : %s\n",mi);
    printf("Largest : %s\n",ma);
    }
    return 0;
}
