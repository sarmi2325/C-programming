#include <stdio.h>
#include<string.h>
int main() {
    char str[1001],rev[1001];
    scanf("%s",str);
    int index=0,flag=0;
    int n=strlen(str);
    for(int i=n-1;i>=0;i--){
        rev[index++]=str[i];
    }
    printf("%s %s",str,rev);
    for(int i=0;i<n;i++){
        if(str[i]==rev[i]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }

    return 0;
}
