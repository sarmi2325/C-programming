CODE:

#include <stdio.h>
#include<string.h>
void rev(char *str){
    int len=strlen(str);
    if(len==0){
        return ;
    }
    char *space=strchr(str,' ');
    if(space!=NULL){
        *space='\0';
        rev(space+1);
    }
    printf("%s ",str);
    if(space!=NULL){
        *space=' ';
    }
}

int main() {
    char str[1001];
    scanf("%[^\n]",str);
    rev(str);
    return 0;
}
